#ifndef ACCOUNTS.CLASS_HPP
#define ACCOUNTS.CLASS_HPP

class Account {
    private:
        static int _totAccount
        static int _totAmount
        static int _totNbDeposit
        static int _totNbWithdrawal

        int _index
        int _amount
        int _deposit
        int _withdrawal
        int _nbDeposits
        int _nbWithdrawals


    public:
        typedef Account t;

        void displayAccountsInfos()
        void displayStatus()

}

#endif