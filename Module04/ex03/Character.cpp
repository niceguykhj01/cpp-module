#include "Character.hpp"

Character::Character(std::string name) {
    std::cout << "Character constructor called for " << name << std::endl;
    this->name = name;
}

Character::Character(Character &other) {
    *this = other;
}

Character::~Character() {
    std::cout << "Character destructor called for " << name << std::endl;
    for(int i = 0; i < 4; i++) {
        if (this->inventory[i] != NULL) {
            std::cout << this->inventory[i] << std::endl;
            delete this->inventory[i];
        }
    }
    
}

std::string const &Character::getName() const {
    return this->name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i] == NULL) {
            this-> inventory[i] = m;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        if (inventory[idx] != NULL) {
            inventory[idx] = NULL;
        }
    }
    
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4) {
        if (inventory[idx] != NULL) {
            inventory[idx]->use(target);
        }
    }
    
}

Character &Character::operator=(const Character &other) {
    this->name = other.getName();

    for(int i = 0; i < 4; i++) {
        this->inventory[i] = other.inventory[i];
    }

    return *this;
}