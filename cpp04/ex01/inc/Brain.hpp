#pragma once

#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    protected:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain& src);
        Brain&      operator=(const Brain& src);

        ~Brain();
        
        void        setIdea(int index, std::string idea);
        std::string getIdea(int index) const;

        std::string* getIdeas() const;
};