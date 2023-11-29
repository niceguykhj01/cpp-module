#include "Character.hpp"

int main()
{   
    ICharacter* test = new Character("test");
    ICharacter* bob = new Character("bob");

    test->use(0, *bob);

    delete bob;
    delete test;
    return 0;
}