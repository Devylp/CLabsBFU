/*
#include <iostream>
#include <vector>
#include <algorithm>

// �������� ������� ��� ������� �������
int SummNums(int number);

int main() {
	setlocale(LC_ALL, "Russian");

	// �������������� ������
	std::cout << "������� ����� ������������������: ";
	int n;
	std::cin >> n;
	std::vector<int> numbers(n);

	// ������� 1

	//������ ������
	for (int i = 0; i < n; i++) {
		int num;
		std::cin >> num;
		numbers[i] = num;
	}

	//��������� �������
	for (int j = 0; j < n; j++) {
		if (SummNums(numbers[j]) == 14) {
			std::sort(numbers.begin(), numbers.end());
		}
	}

	//����� �������
	for (int k = 0; k < n; k++)
		std::cout << numbers[k] << " ";
}

// ������� ��� ������� �������
int SummNums(int number) {

	int summ = 0;

	while (number > 0) {
		summ += number % 10;
		number /= 10;
	}
	return summ;
}
*/