#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <limits>

class Contact {
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal_address;
        std::string email_address;
        std::string phone_number;
        std::string birthday_date;
        std::string favorite_meal;
        std::string underwear_color;
        std::string darkest_secret;

        void init() {
            std::cout << "Enter first name: ";
            std::getline (std::cin, this->first_name);
            std::cout << "Enter last name: ";
            std::getline (std::cin, this->last_name);
            std::cout << "Enter nickname: ";
            std::getline (std::cin, this->nickname);
            std::cout << "Enter login: ";
            std::getline (std::cin, this->login);
            std::cout << "Enter postal address: ";
            std::getline (std::cin, this->postal_address);
            std::cout << "Enter email address: ";
            std::getline (std::cin, this->email_address);
            std::cout << "Enter phone number: ";
            std::getline (std::cin, this->phone_number);
            std::cout << "Enter birthday date: ";
            std::getline (std::cin, this->birthday_date);
            std::cout << "Enter favorite meal: ";
            std::getline (std::cin, this->favorite_meal);
            std::cout << "Enter underwear color: ";
            std::getline (std::cin, this->underwear_color);
            std::cout << "Enter darkest secret: ";
            std::getline (std::cin, this->darkest_secret);
        }

};

Contact get_info();
void search(Contact*, int);
std::string truncate(std::string);

#endif