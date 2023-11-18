#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Default Cat constructor called" << std::endl;
    this->Animal::type = "Cat";
}

std::string Cat::getType() {
    return this->Animal::getType();
}

void Cat::makeSound() {
    this->Animal::makeSound();
}

Cat::~Cat() {
    std::cout << "Cat Desctructor called" << std::endl;
}