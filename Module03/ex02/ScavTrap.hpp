#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string const &name);
        void guardGate();
        ~ScavTrap();
};