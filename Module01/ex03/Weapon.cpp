#include "Weapon.hpp"

Weapon::Weapon(std::string input) {
    this.type = input;
}

std::string Weapon::getType(Weapon weapon) {
    return this.type
}
void Weapon::setType(std::string input) {
    this.type = input;
}