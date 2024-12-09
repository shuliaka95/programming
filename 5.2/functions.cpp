#include "functions.h"
#include <iostream>

void Sort(int* arr, int size) {
    for (int i = 1; i < size; i++) {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
            int tmp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = tmp;
        }
    }

}

void BinarySortArray(int* array, int size) {
    int x, left, right, middle;
    for (int i = 2; i < size; ++i) {
        if (array[i - 1] > array[i]) {
            x = array[i];
            left = 0;
            right = i - 1;
            do {
                middle = (left + right) / 2;
                if (array[middle] < x) {
                    left = middle + 1;
                }
                else {
                    right = middle - 1;
                }
            } while (left <= right);
            for (int j = i - 1; j >= left; --j) {
                array[j + 1] = array[j];
            }
            array[left] = x;
        }
    }
}

void output(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << "\n";
    }
}