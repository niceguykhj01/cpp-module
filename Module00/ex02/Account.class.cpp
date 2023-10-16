#include <iostream>
#include <ctime>
#include "Acccount.class.hpp"

int Account::_totAccount = 0;
int Account::_totAmount = 0;
int Account::_totNbDeposit = 0;
int Account::_totNbWithdrawal = 0;

Account::Account(int initial) {
    _index = Account::_totAccount;
    _amount = initial;
    _deposit = 0;
    _withdrawal = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    Account::totAmount += _amount;
    ++Account::_totAccount

    printTime();
    std::cout << "index:" << _index << ";"
              << "amount:" << _amount << ";"
              << "created"
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
              << '] ';
}