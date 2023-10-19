#include <ctime>
#include "Zombie.hpp"

int main(void)
{
	Zombie stackZombie = Zombie("stackZombie");
	stackZombie.announce();

	Zombie *heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;

	std::string names[4] = {"Jimin", "Haejune", "Gunho", "Jaeseo"};

	for (int i = 0; i < 4; ++i)
		randomChump(names[i]);

	return (0);
}   