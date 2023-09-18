#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>

int main(int ac, char *av[])
{
    if (ac == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }

    for (int i = 1; i < ac; i++) {
        std::transform(av[i], av[i] + (sizeof(char) * strlen(av[i])), av[i], toupper);
        std::cout << av[i];
    }
    std::cout << std::endl;
    return (0);
}
