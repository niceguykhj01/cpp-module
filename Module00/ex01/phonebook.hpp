#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

class Contact {
    public:
        char* first_name;
        char* last_name;
        char* nickname;
        char* login;
        char* postal_address;
        char* email_address;
        char* phone_number;
        char* birthday_date;
        char* favorite_meal;
        char* underwear_color;
        char* darkest_secret;

};

Contact get_info();
void search(Contact*, int);

#endif