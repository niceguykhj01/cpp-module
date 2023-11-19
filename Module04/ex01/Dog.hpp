#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, public Brain {
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog &other);
        ~Dog();

        std::string getType();
        void makeSound();

        void operator=(const Dog &other);
};

#endif