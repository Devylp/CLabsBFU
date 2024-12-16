/*
#include <iostream>

// ��������� ������� ��� �������� �������
int SearchMinNumberMatrix(int array[100][100], int rows, int cols);

int main() {
	setlocale(LC_ALL, "Russian");

	// ������� 3
	const int MAXR = 100;
	int matrix[MAXR][MAXR];
	int row, col;
	std::cout << "������� ����������� ������� row x col: ";
	std::cin >> row >> col;

	// ���� �������
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			std::cin >> matrix[i][j];
	}

	// ��������� �������
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

	//��������� ������ ���� minCol ������
	if (minCol != -1) {
		for (int i = 0; i < row; i++) {
			if (matrix[i][minCol] < 0) {
				matrix[i][minCol] = 0;
			}
		}
	}

	// ����� �������
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}


// ������� ��� �������� �������
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