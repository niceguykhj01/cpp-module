#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name) {
    Zombie *newZombie = new Zombie[N];

    for(int i = 0; i < N; i++) {
        newZombie[i]._name = name;
        newZombie[i].announce();
    }

    return newZombie;
}