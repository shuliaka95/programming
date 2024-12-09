#include <iostream> 
#include "functions.h"

int main() {
    int size;
    std::cout << "Enter size of arrays \n";
    std::cin >> size;
    int* array = new int[size];

    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;
        std::cout << array[i] << "\n";
    }

    BinarySortArray(array, size);

    std::cout << "\n";

    output(array, size);

    int* arr = new int[size];

    std::cout << "\n";

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
        std::cout << arr[i] << "\n";
    }

    Sort(arr, size);

    std::cout << "\n";

    output(arr, size);
}