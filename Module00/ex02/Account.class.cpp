#include <iostream>
#include <ctime>
#include "Account.class.hpp"

int Account::_totAccount = 0;
int Account::_totAmount = 0;
int Account::_totNbDeposit = 0;
int Account::_totNbWithdrawal = 0;

Account::Account(int initial) {
    _index = Account::_totAccount;
    _amount = initial;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    Account::_totAmount += _amount;
    ++Account::_totAccount;

    printTime();
    std::cout << "index:" << _index << ";"
              << "amount:" << _amount << ";"
              << "created"
              << std::endl;
}

void Account::makeDeposit(int depAmount) {
    printTime();
    std::cout << "index:" << _index << ";"
              << "p_amount:" << _amount << ";"
              << "deposit:" << depAmount << ";";

    _amount += depAmount;
    ++_nbDeposits;
    ++_totNbDeposit;
    Account::_totAmount += depAmount;
    
    std::cout << "amount:" << _amount << ";"
              << "nb_deposits:" << _nbDeposits
              << std::endl;
}

void Account::makeWithdrawal(int withAmount) {
    printTime();
    std::cout << "index:" << _index << ";"
              << "p_amount:" << _amount << ";"
              << "withdrawal:";
    
    if(withAmount > _amount) {
        std::cout << "refused";
    }
    else {
        _amount -= withAmount;
        ++_nbWithdrawals;
        ++_totNbWithdrawal;
        Account::_totAmount -= withAmount;

        std::cout << withAmount << ";"
                  << "amount:" << _amount << ";"
                  << "nb_withdrawals:" << _nbWithdrawals;
    }

    std::cout << std::endl;
}

void Account::displayAccountsInfos() {
    
    printTime();
    std::cout << "accounts:" << Account::_totAccount << ";"
              << "total:" << Account::_totAmount << ";"
              << "deposits:" << Account::_totNbDeposit << ";"
              << "withdrawals:" << Account::_totNbWithdrawal
              << std::endl;

}

void Account::displayStatus() {
    printTime();
    std::cout << "index:" << _index << ";"
              << "amount:" << _amount << ";"
              << "deposits:" << _nbDeposits << ";"
              << "withdrawals:" << _nbWithdrawals
              << std::endl;
}
Account::~Account() {
    printTime();
    std::cout << "index:" << _index << ";"
              << "amount:" << _amount << ";"
              << "closed"
              << std::endl;
}

void printTime() {
    time_t curr = time(0);
    tm *now = localtime(&curr);

    std::cout << '['
              << 1900 + now -> tm_year
              << 1 + now -> tm_mon
              << now -> tm_mday
              << '_'
              << now -> tm_hour
              << now -> tm_min
              << now -> tm_sec
              << "] ";
}