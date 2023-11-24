#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Default Dog constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog &other) {
    *this = other;
}

void Dog::operator=(const Dog &other) {
    this->Animal::type = other.Animal::type;
    this->brain = other.brain;
}
std::string Dog::getType() {
    return this->Animal::getType();
}

void Dog::makeSound() const{
    std::cout << "woof" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog Desctructor called" << std::endl;
    delete this->brain;
}