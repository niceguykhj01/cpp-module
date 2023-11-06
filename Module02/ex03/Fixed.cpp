#include "Fixed.hpp"

Fixed::Fixed() {
    //std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed &other) {
    //std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int value) {
    //std::cout << "Int constructor called" << std::endl;
    this -> value = value << this -> fpb;
}

Fixed::Fixed(const float value) {
    //std::cout << "Float constructor called" << std::endl;
    this -> value = (int)roundf((value * (1 << this -> fpb)));
}

float Fixed::toFloat() const{
    return ((float) this -> value / (1 << this -> fpb));
}

int Fixed::toInt() const {
    return (this -> value >> this -> fpb);
}

void Fixed::operator=(const Fixed &other) {
    //std::cout << "Assignation operator called" << std::endl;
    value = other.value;
}

std::ostream& operator<<(std::ostream& os, const Fixed& value) {
    os << value.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed &other) const {
    return (value > other.value);
}

bool Fixed::operator>=(const Fixed &other) const {
    return value >= other.value;
}

bool Fixed::operator<(const Fixed &other) const {
    return (value < other.value);
}

bool Fixed::operator<=(const Fixed &other) const {
    return this -> value <= other.value;
}

bool Fixed::operator==(const Fixed &other) const {
    return this -> value == other.value;
}

bool Fixed::operator!=(const Fixed &other) const {
    return this -> value != other.value;
}

Fixed Fixed::operator+(const Fixed &other) {
    Fixed c(this -> toFloat() * other.toFloat());
    return c;
}

Fixed Fixed::operator-(const Fixed &other){
    Fixed c(this -> toFloat() * other.toFloat());
    return c;
}

Fixed Fixed::operator*(const Fixed &other) {
    Fixed c(this -> toFloat() * other.toFloat());
    return c;
}

Fixed Fixed::operator/(const Fixed &other) {
    Fixed c(this -> toFloat() * other.toFloat());
    return c;
}

Fixed &Fixed::operator++() {
    ++value;
    return *this;
}

Fixed Fixed::operator++(const int) {
    Fixed temp = *this;
    ++value;
    return temp;
}

Fixed &Fixed::operator--() {
    --value;
    return *this;
}

Fixed Fixed::operator--(const int) {
    Fixed temp = *this;
    --value;
    return temp;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if((Fixed)a < (Fixed)b) {
        return a;
    }
    else {
        return b;
    }
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}

int Fixed::getRawBits() const {
    //std::cout << "getRawBits member function called" << std::endl;
    return this -> value;
}

void Fixed::setRawBits(int const raw) {
    this -> value = raw;
}

Fixed::~Fixed() {
    //std::cout << "Destructor called" << std::endl;
}