#include <iostream>
#include "LAB7.hpp"

int main() {
    int n;
    std::cin >> n;

    int** A = create_and_fill_array(n);
    std::cout << std::endl;

    CheckDiagonalMatrix(A, n);
    
    print_array(A, n);
    delete_array(A, n);
}