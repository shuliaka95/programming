#include "functions.h"
#include <iostream>
#include <iomanip>

void print_matrix(double** matrix, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << std::setw(4) << matrix[i][j] << std::setw(4);
        }
        std::cout << "\n";
    }
}


void sort_columns_by_last_element(double** matrix, int n, int m) {
    for (int i = 0; i < m - 1; ++i) {
        for (int j = i + 1; j < m; ++j) {
            if (matrix[n - 1][i] > matrix[n - 1][j]) {
                for (int k = 0; k < n; ++k) {
                    double temp = matrix[k][i];
                    matrix[k][i] = matrix[k][j];
                    matrix[k][j] = temp;
                }
            }
        }
    }
}