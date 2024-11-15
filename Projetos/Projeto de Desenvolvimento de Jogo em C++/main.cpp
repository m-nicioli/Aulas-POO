// ----------------------------------------------------------------------------------------------------------------------------------
// Programa: Snake - jogo
// ----------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <raylib.h>
#include <deque>
#include <raymath.h>

using namespace std;


Color green = {173, 204, 96, 255};
Color darkGreen = {43, 51, 24, 255};

int cellSize = 30;
int cellCount = 25;
int offset = 75;

double lastUptadeTime = 0;

bool ElementInDeque(Vector2 element, deque<Vector2> deque) {

    for(unsigned int i = 0; i < deque.size(); ++i) {
        if (Vector2Equals(deque[i], element)) {
            return true;
        }
    }
    return false;
}

bool eventTriggered(double interval) {

    double currentTime = GetTime();
    if(currentTime - lastUptadeTime >= interval) {
        lastUptadeTime = currentTime;
        return true;
    }
    return false;
};


// --------------------------------------------------------------------------------------------
// Cobrinha
// --------------------------------------------------------------------------------------------
class Snake {
    public:
        deque<Vector2> body = {Vector2{6, 9}, Vector2{5, 9}, Vector2{4, 9}};
        Vector2 direction = {1, 0};
        bool addSegment = false;

        void Draw() {

            for(unsigned int i = 0; i < body.size(); ++i) {

                int x = body[i].x;
                int y = body[i].y;
                Rectangle segment = Rectangle{x * cellSize, y * cellSize, (float)cellSize, (float)cellSize};
                DrawRectangleRounded(segment, 0.7, 6, darkGreen);
            }
        };

        void Update() {

            body.push_front(Vector2Add(body[0], direction));
            if (addSegment == true) {
                            addSegment = false;
            } else {
                body.pop_back();
            }
        };

        void Reset() {
            body = {Vector2{6, 9}, Vector2{5, 9}, Vector2{4, 9}};
            direction = {1, 0};
        }
};
// --------------------------------------------------------------------------------------------
// Parte da Comida
// --------------------------------------------------------------------------------------------
class Food {
    public:
        Vector2 position = {5, 2};
        Texture2D texture;

        // Alimento da cobrinha
        Food(deque<Vector2> snakeBody) {

            Image image = LoadImage("Assets/image/food.png");
            texture = LoadTextureFromImage(image);
            UnloadImage(image);
            position = GenereteRandomPos(snakeBody);
        }

        // Destructor
        ~Food() {
            UnloadTexture(texture);
        }

        // Fundo
        void Draw() {

            DrawTexture(texture, position.x * cellSize, position.y * cellSize, WHITE);
        }

        Vector2 GenerateRandomCell() {
            float x = GetRandomValue(0, cellCount - 1);
            float y = GetRandomValue (0, cellCount - 1);
            return Vector2{x, y};
        }

        // Gera, sempre ao abrir o jogo, uma posição diferente ao alimento


        Vector2 GenereteRandomPos(deque<Vector2> snakeBody) {

            Vector2 position = GenerateRandomCell();
            // Garantir que a comida não apareça na área do título e score
            while (ElementInDeque(position, snakeBody) || position.y < (offset + 40) / cellSize) {
                position = GenerateRandomCell();
            }
            return position;
}

};
// --------------------------------------------------------------------------------------------
// O jogo
// --------------------------------------------------------------------------------------------
class Game {
    public: 
        Snake snake = Snake();
        Food food = Food(snake.body);
        bool running = true;
        int score = 0;
        Sound eatSound;
        Sound wallSound;

        // ------------------------------------------------
        // Som
        Game() {
            InitAudioDevice(); {
                eatSound = LoadSound("Assets/sounds/eat.mp3");
                wallSound = LoadSound("Assets/sounds/wall.mp3");
            }
        }

        ~Game() {
            UnloadSound(eatSound);
            UnloadSound(wallSound);
            CloseAudioDevice();
        }

        // ------------------------------------------------
        // Rodar
        void Draw() {
            food.Draw();
            snake.Draw();
            
        }

        void Update() {
            if(running) {
                if (snake.body[0].y < offset + 40) {
                    snake.Update();
                    CheckCollisionWithFood();
                    CheckCollisionWithEdges();
                    CheckCollisionWithTail();
                }
            }
        }

        void CheckCollisionWithFood() {
            if(Vector2Equals(snake.body[0], food.position)) {
                food.position = food.GenereteRandomPos(snake.body);
                snake.addSegment = true;
                score++;
                PlaySound(eatSound);
            }
        }

        void CheckCollisionWithEdges() {
            if(snake.body[0].x == cellCount || snake.body[0].x == -1) {
                GameOver();
            }
            if(snake.body[0].y == cellCount || snake.body[0].y == -1 || snake.body[0].y == (offset + 40) / cellSize) {
                GameOver();
            }
        }

        void GameOver() {
            snake.Reset();
            food.position = food.GenereteRandomPos(snake.body);
            running = false;
            score = 0;
            PlaySound(wallSound);

            int textWidth = MeasureText("Game Over!", 40);
            int textHeight = 40;

            DrawText("Game Over!", GetScreenWidth() / 2 - MeasureText("Game Over!", 40) / 2, GetScreenHeight() / 2 - 20, 40, DARKGRAY);
        }

        void CheckCollisionWithTail() {
            deque<Vector2> headlessBody = snake.body;
            headlessBody.pop_front();
            if (ElementInDeque(snake.body[0], headlessBody)) {
                GameOver();
            }
        }
};
// ----------------------------------------------------------------------------------------------------------------------------------
// Função Principal
// ----------------------------------------------------------------------------------------------------------------------------------
int main () {

    // Inicializando o jogo
    cout << "Iniciando o jogo... " << endl;
    InitWindow(cellSize * cellCount, cellSize * cellCount, "Snake");
    SetTargetFPS(60);

    Game game = Game();

    while(WindowShouldClose() == false) {
        BeginDrawing();
        // ------------------------------------------------
        // Fazendo ela mover  
        if(eventTriggered(0.2)) {
            game.Update();
        }

        if(IsKeyPressed(KEY_UP) && game.snake.direction.y != 1) {
            game.snake.direction = {0, -1};
            game.running = true;
        } 
        if (IsKeyPressed(KEY_DOWN) && game.snake.direction.y != -1) {
            game.snake.direction = {0, 1};
            game.running = true;
        }

        if (IsKeyPressed(KEY_LEFT) && game.snake.direction.x != 1) {
            game.snake.direction = {-1, 0};
            game.running = true;
        }
        if (IsKeyPressed(KEY_RIGHT) && game.snake.direction.x != -1) {
            game.snake.direction = {1, 0};
            game.running = true;
        }

        // Construindo o jogo
        ClearBackground(RAYWHITE);
        DrawText("Snake", offset - 5, 20, 40, darkGreen);
        DrawText(TextFormat("Score: %i", game.score), offset - 5, offset + 10, 40, darkGreen);
        game.Draw();

        if (!game.running) {
            DrawText("Game Over!", GetScreenWidth() / 2 - MeasureText("Game Over!", 40) / 2, GetScreenHeight() / 2 - 20, 40, DARKGRAY);
        }

        EndDrawing();
    }

    // Fechar o jogo
    CloseWindow();
    return 0;
}