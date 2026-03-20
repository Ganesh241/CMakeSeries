#include <iostream>
#include "dog.h"
#include "operation.h"

int main() {
    Dog d1("Harry");
    int sum = integerAddition(5, 7);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}