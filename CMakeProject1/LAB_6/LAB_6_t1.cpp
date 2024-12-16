/*
#include <iostream>
#include <vector>
#include <algorithm>

// Прототип функции для первого задания
int SummNums(int number);

int main() {
	setlocale(LC_ALL, "Russian");

	// Инициализируем вектор
	std::cout << "Введите длину последовательности: ";
	int n;
	std::cin >> n;
	std::vector<int> numbers(n);

	// Задание 1

	//Вводим вектор
	for (int i = 0; i < n; i++) {
		int num;
		std::cin >> num;
		numbers[i] = num;
	}

	//Обработка вектора
	for (int j = 0; j < n; j++) {
		if (SummNums(numbers[j]) == 14) {
			std::sort(numbers.begin(), numbers.end());
		}
	}

	//Вывод вектора
	for (int k = 0; k < n; k++)
		std::cout << numbers[k] << " ";
}

// Функция для первого задания
int SummNums(int number) {

	int summ = 0;

	while (number > 0) {
		summ += number % 10;
		number /= 10;
	}
	return summ;
}
*/