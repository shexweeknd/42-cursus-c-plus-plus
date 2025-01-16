#pragma once

#define CAT_HPP

#include "iostream"
#include "string"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string _type);
        Cat(const Cat& src);
        Cat&    operator=(const Cat& src);

        ~Cat();

        void    makeSound() const;

        void    setIdea(int index, std::string idea);
        std::string     getIdea(int index);

        void            showIdeas();

    private:
        Brain *_brain;
};