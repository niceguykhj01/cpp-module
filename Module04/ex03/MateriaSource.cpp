#include "MateriaSource.hpp"

MateriaSource::MateriaSource(std::string name) {
    this->name = name;
}

MateriaSource::MateriaSource(MateriaSource &other) {
    *this = other;
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource destructor called for " << name << std::endl;

    for(int i = 0; i < 4; i++) {
        if (inventory[i] != NULL) {
            std::cout << inventory[i] << std::endl;
            delete inventory[i];
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {

    for(int i = 0; i < 4; i++) {
        if (this->inventory[i] != NULL && this->inventory[i]->getType() == type) {
                std::cout << this->inventory[i]->getType() << std::endl;
                return this->inventory[i];
            }
    }
    return 0;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    this->name = other.name;

    for(int i = 0; i < 4; i++) {
        this->inventory[i] = other.inventory[i];
    }

    return *this;
}