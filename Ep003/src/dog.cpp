#include <iostream>
#include <string>
#include "dog.h"

Dog::Dog(const std::string& dogName) : name(dogName) {
    std::cout << "Constructor for the " << dogName << " called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor for the " << name << " called" << std::endl;
}