#include <iostream>
#include "functions.h"
#include <iomanip>

int main() {
    setlocale(LC_ALL, "Rus");

    int row = 0, column = 0;
    std::cin >> row;
    std::cin >> column;
    double** matrix = new double* [row];
    for (int i = 0; i < row; ++i) {
        matrix[i] = new double[column];
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            matrix[i][j] = (rand() % 100) - 37;
        }
    }

    std::cout << "Исходная матрица: \n";
    print_matrix(matrix, row, column);

    sort_columns_by_last_element(matrix, row, column);

    std::cout << "Матрица после сортировки столбцов по неубыванию последних элементов: \n";
    print_matrix(matrix, row, column);

    for (int i = 0; i < row; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

}
