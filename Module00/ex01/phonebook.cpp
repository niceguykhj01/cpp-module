#include "phonebook.hpp"


int main() {
    Contact * contacts = new Contact[8];
    int count = 0;

    while (count < 9) {
        std::string command;

        std::cout << "Enter a command: ";
        std::cin >> command;
        std::cin.ignore(1,'\n');

        if (command == "EXIT") {
            delete[] contacts;
            return (0);
        }
        else if (command == "ADD") {
            if (count == 8) {
                std::cout << "Maximum of 8 contacts allowed!" << std::endl;
            }
            else {
                contacts[count] = get_info();
                count++;
            }
        }
        else if (command == "SEARCH") {
            search(contacts, count);
        }
        else {
            std::cout << "Invalid input" << std::endl;
        }
    }
}