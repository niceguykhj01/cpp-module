#include "phonebook.hpp"

Contact get_info() {
    Contact temp;
    std::cout << "Enter first name: ";
    std::cin >> temp.first_name;
    std::cout << "Enter last name: ";
    std::cin >> temp.last_name;
    std::cout << "Enter nickname: ";
    std::cin >> temp.nickname;
    std::cout << "Enter login: ";
    std::cin >> temp.login;
    std::cout << "Enter postal address: ";
    std::cin >> temp.postal_address;
    std::cout << "Enter email address: ";
    std::cin >> temp.email_address;
    std::cout << "Enter phone number: ";
    std::cin >> temp.phone_number;
    std::cout << "Enter birthday date: ";
    std::cin >> temp.birthday_date;
    std::cout << "Enter favorite meal: ";
    std::cin >> temp.favorite_meal;
    std::cout << "Enter underwear color: ";
    std::cin >> temp.underwear_color;
    std::cout << "Enter darkest secret: ";
    std::cin >> temp.darkest_secret;
    
    return (temp);
}

void search(Contact* contacts, int count) {

    for (int i = 0; i < count; i++) {
        Contact temp = contacts[i];
        std::cout << i << temp.first_name << temp.last_name << temp.nickname << std::endl;
    }
    
    if (0 < count) {

        int index;
        std::cout << "Enter index: ";
        std::cin >> index;

        if (0 <= index && index <= count) {
            Contact temp1 = contacts[index];
            std::cout << temp1.first_name << std::endl;
            std::cout << temp1.last_name << std::endl;
            std::cout << temp1.nickname << std::endl;
            std::cout << temp1.login << std::endl;
            std::cout << temp1.postal_address << std::endl;
            std::cout << temp1.email_address << std::endl;
            std::cout << temp1.phone_number << std::endl;
            std::cout << temp1.birthday_date << std::endl;
            std::cout << temp1.favorite_meal << std::endl;
            std::cout << temp1.underwear_color << std::endl;
            std::cout << temp1.darkest_secret << std::endl;
        }
        else {
            std::cout << "Invalid index" << std::endl;
        }
    }
    else {
        std::cout << "no contact to show" << std::endl;
    }
}