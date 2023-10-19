#include <string>
#include <iostream>
#include <list>

class Zombie {
    private:
        
    public:
        std::string _name;
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        
        void announce();
};

Zombie *ZombieHorde(int N, std::string name);