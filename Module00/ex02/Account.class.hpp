class Account {
    private:
        static int _totAccount;
        static int _totAmount;
        static int _totNbDeposit;
        static int _totNbWithdrawal;

        int _index;
        int _amount;
        int _nbDeposits;
        int _nbWithdrawals;


    public:
        typedef Account t;

        Account(int initial);
        ~Account();
        
        void makeDeposit(int depAmount);
        void makeWithdrawal(int withAmount);
        void displayStatus();
        
        static void displayAccountsInfos();

};

void printTime();