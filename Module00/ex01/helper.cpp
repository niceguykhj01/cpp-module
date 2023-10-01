#include "phonebook.hpp"



Contact get_info() {
    Contact temp;
    std::cout << "Enter first name: ";
    std::getline (std::cin, temp.first_name);
    std::cout << "Enter last name: ";
    std::getline (std::cin, temp.last_name);
    std::cout << "Enter nickname: ";
    std::getline (std::cin, temp.nickname);
    std::cout << "Enter login: ";
    std::getline (std::cin, temp.login);
    std::cout << "Enter postal address: ";
    std::getline (std::cin, temp.postal_address);
    std::cout << "Enter email address: ";
    std::getline (std::cin, temp.email_address);
    std::cout << "Enter phone number: ";
    std::getline (std::cin, temp.phone_number);
    std::cout << "Enter birthday date: ";
    std::getline (std::cin, temp.birthday_date);
    std::cout << "Enter favorite meal: ";
    std::getline (std::cin, temp.favorite_meal);
    std::cout << "Enter underwear color: ";
    std::getline (std::cin, temp.underwear_color);
    std::cout << "Enter darkest secret: ";
    std::getline (std::cin, temp.darkest_secret);
    
    return (temp);
}

std::string truncate(std::string str) {
    if (str.size() > 10) {
        str = str.substr(0, 9);
        str += '.';
    }
    return str;
}
void search(Contact* contacts, int count) {
    
    if (0 < count) {
        std::cout << std::setw(10) << "index" <<'|';
        std::cout << std::setw(10) << "first name" <<'|';
        std::cout << std::setw(10) << "last name" <<'|';
        std::cout << std::setw(10) << "nickname" << std::endl;

        for (int i = 0; i < count; i++) {
            Contact temp = contacts[i];
            std::cout << std::setw(10) << i <<'|';
            std::cout << std::setw(10) << truncate(temp.first_name) <<'|';
            std::cout << std::setw(10) << truncate(temp.last_name) <<'|';
            std::cout << std::setw(10) << truncate(temp.nickname) << std::endl;
        }

        int index;
        std::cout << "Enter index: ";
        std::cin >> index;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (std::cin.fail()) {
            std::cin.clear();
            std::cout << "input a number";
            return ;
        }
        if (0 <= index && index < count && isdigit(index)) {
            Contact temp1 = contacts[index];
            std::cout << std::endl;
            std::cout << "first name: " << temp1.first_name << std::endl;
            std::cout << "last name: " << temp1.last_name << std::endl;
            std::cout << "nickname: " << temp1.nickname << std::endl;
            std::cout << "login: " << temp1.login << std::endl;
            std::cout << "postal address: " << temp1.postal_address << std::endl;
            std::cout << "email address: " << temp1.email_address << std::endl;
            std::cout << "phone number: " << temp1.phone_number << std::endl;
            std::cout << "birthday date: " << temp1.birthday_date << std::endl;
            std::cout << "favorite meal: " << temp1.favorite_meal << std::endl;
            std::cout << "underwear color: " << temp1.underwear_color << std::endl;
            std::cout << "darkest secret: " << temp1.darkest_secret << std::endl;
            std::cout << std::endl;
        }
        else {
            std::cout << "Invalid index" << std::endl;
        }
    }
    else {
        std::cout << "no contact to show" << std::endl;
    }
}