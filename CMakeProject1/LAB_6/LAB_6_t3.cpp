/*
#include <iostream>

// Прототипы функции для третьего задания
int SearchMinNumberMatrix(int array[100][100], int rows, int cols);

int main() {
	setlocale(LC_ALL, "Russian");

	// Задание 3
	const int MAXR = 100;
	int matrix[MAXR][MAXR];
	int row, col;
	std::cout << "Введите размерность матрицы row x col: ";
	std::cin >> row >> col;

	// Ввод матрицы
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			std::cin >> matrix[i][j];
	}

	// Обработка матрицы
	int minVal = 2147483647;
	int minCol = -1;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (matrix[i][j] < minVal) {
				minVal = matrix[i][j];
				minCol = j;
			}
		}
	}

	//Обработка только если minCol найден
	if (minCol != -1) {
		for (int i = 0; i < row; i++) {
			if (matrix[i][minCol] < 0) {
				matrix[i][minCol] = 0;
			}
		}
	}

	// Вывод матрицы
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}


// Функция для третьего задания
int SearchMinNumberMatrix(int array[100][100], int rows, int cols) {
	int MinNum = 100000;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (array[i][j] < MinNum) { MinNum = array[i][j]; }
		}
	}
	return MinNum;
}
*/