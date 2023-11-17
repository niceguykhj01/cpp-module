#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "Default ScavTrap was called." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name){
    hitpoints = 100;
    energy = 50;
    damage = 20;
    std::cout << "ScavTrap " << name << " has spawned!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << this->name << " has entered Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name << " is gone..." << std::endl;
}