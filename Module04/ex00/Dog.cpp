#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Default Dog constructor called" << std::endl;
    this->Animal::type = "Dog";
}

std::string Dog::getType() {
    return this->Animal::getType();
}

void Dog::makeSound() {
    this->Animal::makeSound();
}

Dog::~Dog() {
    std::cout << "Dog Desctructor called" << std::endl;
}