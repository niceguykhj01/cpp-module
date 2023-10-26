#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    fpv = 0;
}

Fixed::Fixed(Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    
}

void Fixed::operator=(const Fixed &other) {
    std::cout << "Assignation operator called" << std::endl;
    fpv = other.Fixed::getRawBits();
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this -> fpv;
}

void Fixed::setRawBits(int const raw) {
    this -> fpv = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

