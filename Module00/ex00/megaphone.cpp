#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

int main(int ac, char *av[])
{
    if (ac == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }

    for (int i = 1; i < ac; i ++) {
        for (int j = 0; j < int(strlen(av[i])); j++) {
                char ch = toupper(av[i][j]);
                std::cout << ch;
        }
    }
    
    

    
    std::cout << std::endl;
    return (0);
}
