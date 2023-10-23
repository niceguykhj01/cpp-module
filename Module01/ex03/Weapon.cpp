#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) {
    this -> type = weapon;
}

std::string &Weapon::getType() {
    return this -> type;
}

void Weapon::setType(std::string weapon) {
    this -> type = weapon;
}

Weapon::~Weapon(){
    
}