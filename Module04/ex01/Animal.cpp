#include "Animal.hpp"


Animal::Animal() {
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) {
    std::cout << "Default Animal constructor called with type " << type << std::endl;
    this->type = type;
}

std::string Animal::getType() const{
    return this->type;
}

void Animal::makeSound() const{
    
}

Animal::~Animal() {
    std::cout << "Animal Destructor called" << std::endl;

}