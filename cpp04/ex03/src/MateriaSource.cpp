#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        this->_materias[i] = NULL;
    }
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != NULL)
        {
            delete this->_materias[i];
        }
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    for (int i = 0; i < 4; i++)
    {
        this->_materias[i] = src._materias[i];
    }
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            this->_materias[i] = src._materias[i];
        }
    }
    std::cout << "MateriaSource assignation operator called" << std::endl;
    return (*this);
}

// INTERFACE FUCNTIONS

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m;
            break;
        }
    }
    std::cout << "MateriaSource learnMateria called" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
        {
            return (this->_materias[i]->clone());
        }
    }
    std::cout << "MateriaSource createMateria called" << std::endl;
    return (NULL);
}