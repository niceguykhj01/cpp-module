#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        void setType(std::string weapon);
        std::string &getType();
        Weapon(std::string weapon);
        ~Weapon();
        
};

#endif