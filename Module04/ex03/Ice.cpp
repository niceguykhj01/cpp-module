#include "Ice.hpp" 

Ice::Ice() : AMateria("ice") {
    std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other) {
}

Ice::~Ice() {
    std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
