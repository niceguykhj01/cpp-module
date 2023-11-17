#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "Default FragTrap was called." << std::endl;
}
FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
    hitpoints = 100;
    energy = 100;
    damage = 30;
    std::cout << "FragTrap " << name << " has spawned!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << this->name << " wants to do a highfive!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name << " is gone..." << std::endl;
}