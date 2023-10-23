#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
    this -> name = name;
    this -> weapon = weapon;
}

void HumanA::attack() {
    std::cout << this -> name << " attacks with his " << this -> weapon.getType() << std::endl;
}

HumanA::~HumanA() {

}