#include <cmath>
#include <iostream>

/*
Дана целочисленная матрица{ Aij }i = 1...n;j = 1..n, n <= 100.
Если все диагональные элементы матрицы положительны и содержат цифры 3 или 5,
заменить минимальные элементы столбцов на суммы квадратов элементов соответствующих столбцов.
*/

int MinNumColumn(int** A, int n, int column) {
    int min = A[0][column - 1]; // Инициализируем min первым элементом столбца
    
    for (int row = 1; row < n; ++row) {
        if (A[row][column - 1] < min) {
            min = A[row][column - 1];
        }
    }
    return min;
}

int Replace(int** A, int n, int column) {
    int replace = 0;

    for (int row = 0; row < n; ++row) {
        replace += (A[row][column - 1]) * (A[row][column - 1]);
    }
    return replace;
}

void ReplaceMinNum(int** A, int n, int column) {
    int min = MinNumColumn(A, n, column);
    
    for (int row = 0; row < n; ++row) {
        if ( A[row][column - 1] == min ) { A[row][column - 1] = Replace(A, n, column); }
    }
}


bool NumberContainDigit(int num, int digit) {
    bool result = true;

    while (num > 0) {
        result = ((num % 10 == digit)? true : false);
        if (result) { return true; }
        num /= 10;
    }
    return result;
}

void CheckDiagonalMatrix(int** A, int n) {
    bool mainDiagonalOk = true;
    bool secondaryDiagonalOk = true;

    // Проверка главной диагонали
    for (int i = 0; i < n; ++i) {
        if (!(A[i][i] > 0 && (NumberContainDigit(A[i][i], 3) || NumberContainDigit(A[i][i], 5)))) {
            mainDiagonalOk = false;
            break;
        }
    }

    // Проверка побочной диагонали
    for (int i = 0; i < n; ++i) {
        if (!(A[i][n - 1 - i] > 0 && (NumberContainDigit(A[i][n - 1 - i], 3) || NumberContainDigit(A[i][n - 1 - i], 5)))) {
            secondaryDiagonalOk = false;
            break;
        }
    }

    // Замена минимальных элементов столбцов, если обе диагонали удовлетворяют условию
    if (mainDiagonalOk && secondaryDiagonalOk) {
        for (int i = 1; i <= n; ++i) {
            ReplaceMinNum(A, n, i);
        }
    }
}



int** create_and_fill_array(int n) {
    int** A = new int* [n];

    for (int i = 0; i < n; i++) {
        A[i] = new int[n];
    }

    for (int j = 0; j < n; j++)
        for (int k = 0; k < n; k++)
            std::cin >> A[j][k];

    return A;
}


void delete_array(int** A, int n) {
    for (int i = 0; i < n; i++)
        delete[] A[i];

    delete[] A;
}


void print_array(int** A, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            std::cout << A[i][j] << "\t";
        std::cout << std::endl;
    }
}