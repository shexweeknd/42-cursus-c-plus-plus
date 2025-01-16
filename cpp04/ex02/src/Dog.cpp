#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    _brain = new Brain();
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(std::string _type) : Animal(_type)
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    type = src.getType();
    _brain = new Brain(*src._brain);
    if (!_brain)
    {
        std::cerr << "Allocation error";
        exit(1);
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wouf Wouf Bitch !" << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
    if (index > 100 || index < 0)
    {
        std::cout << "ONLY [0-100] ideas possible in the poor Brain !" << std::endl;
        return ;
    }
    _brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index)
{
    if (index > 100 || index < 0)
    {
        std::cout << "ONLY [0-100] ideas possible in the poor Brain !" << std::endl;
        return NULL;
    }
    return _brain->getIdea(index);
}

void Dog::showIdeas()
{
    const std::string *ideas = _brain->getIdeas();
    for (int i = 0; i < 100; i++)
    {
        if (!ideas[i].empty())
            std::cout << ideas[i] << std::endl;
    }
    return ;
}