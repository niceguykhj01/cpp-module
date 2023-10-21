#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) {
    this.name = name;
    this.weapon = weapon;
}


void HumanA::attack(std::string name, Weapon weapon) {
    std::cout << name << " attacks with his " << weapon.type << std::endl;
}