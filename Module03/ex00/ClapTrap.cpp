#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    hitpoints = 10;
    energy = 10;
    damage = 0;

    std::cout << "Natural " << name << " has spawned!" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->name << " took " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << this->name << " restored " << amount << " hitpoints!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << this->name << " is gone..." << std::endl;
}