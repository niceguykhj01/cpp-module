#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource {
    private:
        std::string name;
        AMateria* inventory[4];
    public:
        MateriaSource() {};
        MateriaSource(std::string name);
        MateriaSource(MateriaSource &other);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

        MateriaSource &operator=(const MateriaSource &other);
};

#endif