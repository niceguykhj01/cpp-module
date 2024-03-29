#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Default Animal constructor called" << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}

void Animal::makeSound() const{
    if (this->type == "Dog") {
        std::cout << "Woof" << std::endl;
    }
    else if (this->type == "Cat") {
        std::cout << "Meow" << std::endl;
    }
}

Animal::~Animal() {
    std::cout << "Animal Destructor called" << std::endl;
}