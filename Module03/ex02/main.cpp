#include "FragTrap.hpp"

int main() {
    FragTrap James("James");

    James.attack("Zombie");
    James.takeDamage(5);
    James.beRepaired(2);
    James.highFivesGuys();
    
    return 0;
}