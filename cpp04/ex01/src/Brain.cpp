#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = src.ideas[i];
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    for (int i = 0; i < 100; i++)
        ideas[i] = src.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    return ideas[index];
}

std::string* Brain::getIdeas() const
{
    return (std::string*)ideas;
}