#include <string>
#include <iostream>

class ClapTrap {
    private:
        std::string name;
        int hitpoints;
        int energy;
        int damage;
    public:
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ClapTrap(std::string name);
        ~ClapTrap();

};