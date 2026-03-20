#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog {
public:
    Dog(const std::string& dogName);
    ~Dog();
private:
    std::string name{"Moti"};
};

#endif