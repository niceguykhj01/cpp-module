#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_Clap_name"), ScavTrap(), FragTrap() {
    this->name = name;
    hitpoints = 100;
    energy = 50;
    damage = 30;
    std::cout << "DiamondTrap " << name << " has spawned!" << std::endl;
}

void DiamondTrap::attack(std::string const &target) {
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "My name is " << this->name << ", and my clap name is " << this->ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->name << " is gone..." << std::endl;
}