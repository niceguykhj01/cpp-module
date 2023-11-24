#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Default Cat constructor called" << std::endl;
    brain = new Brain();
}

std::string Cat::getType() {
    return this->Animal::getType();
}

Cat::Cat(const Cat &other) {
    *this = other;
}

void Cat::operator=(const Cat &other) {
    this->Animal::type = other.Animal::type;
    this->brain = other.brain;
}

void Cat::makeSound() const{
    std::cout << "meow" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat Desctructor called" << std::endl;
    delete this->brain;
}