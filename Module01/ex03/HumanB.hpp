#include <iostream>

class HumanB {
    private:
        Weapon weapon;
        std::string name;
        
    public:
        void attack(std::string name);
        void setWeapon(std::string name);
        HumanB(std::string name);

};