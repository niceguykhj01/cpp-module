#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this.name = name;

}

void HumanA::attack(std::string name, Weapon weapon) {
    std::cout << name << " attacks with his " << weapon.type << std::endl;
}