#include "DiamondTrap.hpp"

int main() {
    DiamondTrap James("James");

    James.attack("Zombie");
    James.ClapTrap::takeDamage(5);
    James.ClapTrap::beRepaired(2);
    James.ScavTrap::guardGate();
    James.FragTrap::highFivesGuys();
    James.whoAmI();
    
    return 0;
}