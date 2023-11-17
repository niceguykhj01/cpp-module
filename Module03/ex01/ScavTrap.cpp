#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name){
    this->hitpoints = 100;
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