#include "ClapTrap.hpp"

int main() {
    ClapTrap James("James");
    ClapTrap Zombie("Zombie");

    James.attack("Zombie");
    Zombie.takeDamage(5);
    Zombie.beRepaired(2);
    
    return 0;
}