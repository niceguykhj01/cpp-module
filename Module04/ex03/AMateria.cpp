#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) {
    this->type = type;
    std::cout << "AMateria constructor called with type: " << type << std::endl;
}

AMateria::AMateria(AMateria const &other) {
    this->type = other.type;
}

std::string const &AMateria::getType() const {
    return this->type;
}

AMateria &AMateria::operator=(AMateria const &other) {
    this->type = other.type;
    return (*this);
}