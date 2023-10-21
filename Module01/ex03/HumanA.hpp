#include <iostream>

class HumanA {
    private:
        Weapon weapon;
        std::string name;
        
    public:
        void attack(std::string name, Weapon weapon);
        HumanA(std::string name, Weapon weapon);

};