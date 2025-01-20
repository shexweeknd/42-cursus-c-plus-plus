#pragma once

#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _materias[4];

    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const & src);
        MateriaSource & operator=(MateriaSource const & src);

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};