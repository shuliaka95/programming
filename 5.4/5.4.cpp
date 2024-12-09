#include <iostream>
#include <cstring>
#include "functions.h"


int main() {
    char str[1000];

    std::cout << "Enter a string: ";
    std::cin.getline(str, sizeof(str));

    std::cout << "Original string: " << str << "\n";

    remove_consecutive_duplicates(str);
    std::cout << "String after removing consecutive duplicates: " << str << "\n";
}
