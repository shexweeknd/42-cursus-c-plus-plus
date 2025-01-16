#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl << "[TESTING DOG AND CAT]" << std::endl;
    const Animal* chat = new Dog("Chat");
    const Animal* chien = new Dog("Chien");

    std::cout << "Le type du chien " << chien->getType() << " " << std::endl;
    std::cout << "Le type du chat " << chat->getType() << " " << std::endl;

    std::cout << std::endl << "[TESTING WRONG CAT]" << std::endl;
    const WrongAnimal* wrongCat = new WrongCat();

    wrongCat->makeSound();

    std::cout << std::endl << "[DESTRUCTING]" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete chien;
    delete chat;

    delete wrongCat;
    
    return 0;
}