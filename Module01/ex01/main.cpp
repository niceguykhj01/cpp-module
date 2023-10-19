#include <ctime>
#include "Zombie.hpp"

int main(void)
{
	
	Zombie *newZombie = ZombieHorde(5, "example");
	delete[] newZombie;

	return (0);
}   