// BalanceInquiry.h
// Definição da classe BalanceInquiry. Representa uma consulta de saldo
#ifndef BALANCE_INQUIRY_H
#define BALANCE_INQUIRY_H

#include "Transaction.h" 

// -------------------------------------------------------------------------------------------------

class BalanceInquiry : public Transaction
{

    public:

        BalanceInquiry( int, Screen &, BankDatabase & ); // construtor
        virtual void execute(); // realiza a transação
}; 

#endif // BALANCE_INQUIRY_H
