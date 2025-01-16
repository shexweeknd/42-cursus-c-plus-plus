#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    _brain = new Brain();
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(std::string _type) : Animal(_type)
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "Cat assignation operator called" << std::endl;
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

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow Nigga !" << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
    if (index > 100 || index < 0)
    {
        std::cout << "ONLY [0-100] ideas possible in the poor Brain !" << std::endl;
        return ;
    }
    _brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index)
{
    if (index > 100 || index < 0)
    {
        std::cout << "ONLY [0-100] ideas possible in the poor Brain !" << std::endl;
        return NULL;
    }
    return _brain->getIdea(index);
}

void Cat::showIdeas()
{
    const std::string *ideas = _brain->getIdeas();
    for (int i = 0; i < 100; i++)
    {
        if (!ideas[i].empty())
            std::cout << ideas[i] << std::endl;
    }
    return ;
}
