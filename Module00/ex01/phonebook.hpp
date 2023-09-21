#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

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

};

Contact get_info();
void search(Contact*, int);

#endif