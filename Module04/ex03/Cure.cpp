#include "Cure.hpp" 

Cure::Cure() : AMateria("cure") {
    std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other) {
}

Cure::~Cure() {
    std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}