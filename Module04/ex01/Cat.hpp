#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat &other);
        ~Cat();

        std::string getType();
        void makeSound();

        void operator=(const Cat &other);
};

#endif