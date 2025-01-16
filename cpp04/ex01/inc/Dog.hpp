#pragma once

#define DOG_HPP

#include "iostream"
#include "string"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string _type);
        Dog(const Dog& src);
        Dog&    operator=(const Dog& src);

        ~Dog();

        void    makeSound() const;

        void            setIdea(int index, std::string idea);
        std::string     getIdea(int index);

        void            showIdeas();

    private:
        Brain *_brain;
};