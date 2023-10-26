#include "Karen.hpp"


int main(int ac, char* av[]) {

    if(ac != 2) {
        std::cout << "enter one message" << std::endl;
        return 0;
    }

    std::string message = av[1];

    std::string numsList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int compare = -1;

    for(int i = 0; i < 4; ++i) {
        if (numsList[i] == message) {
            compare = i;
            break;
        }
    }
    
    Karen karen;
    
    switch(compare) {
        case(0):
            std::cout << "[ DEBUG ]" << std::endl;
            karen.complain("debug");
            std::cout << std::endl;
            break;
        case(1):
            std::cout << "[ INFO ]" << std::endl;
            karen.complain("info");
            std::cout << std::endl;
            break;
        case(2):
            std::cout << "[ WARNING ]" << std::endl;
            karen.complain("warning");
            std::cout << std::endl;
            break;
        case(3):
            std::cout << "[ ERROR ]" << std::endl;
            karen.complain("error");
            std::cout << std::endl;
            break;
        
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    return 0;
}