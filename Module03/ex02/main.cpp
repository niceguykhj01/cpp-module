#include "ScavTrap.hpp"

int main() {
    ScavTrap James("James");

    James.attack("Zombie");
    James.takeDamage(5);
    James.beRepaired(2);
    James.guardGate();
    
    return 0;
}