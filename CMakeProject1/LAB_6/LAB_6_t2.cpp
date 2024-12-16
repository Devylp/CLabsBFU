/*
#include <iostream>
#include <vector>

// Прототипы функции для второго задания
int MaxDigitNum(int number1);

int FirstDigitNum(int number2);

int main() {
	setlocale(LC_ALL, "Russian");

	// Инициализируем вектор
	std::cout << "Введите длину последовательности: ";
	int n;
	std::cin >> n;
	std::vector<int> numbers(n);


	// Задание 2

	//Вводим вектор
	for (int i = 0; i < n; i++) {
		int num;
		std::cin >> num;
		numbers[i] = num;
	}

	// Сортировка вектора
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n - i - 1); j++) {
			if (FirstDigitNum(numbers[j]) > FirstDigitNum(numbers[j + 1]))
				std::swap(numbers[j], numbers[j + 1]);
		}
	}

	for (int l = 0; l < n; l++) {
		for (int k = 0; k < (n - l - 1); k++) {
			if ((FirstDigitNum(numbers[k]) == FirstDigitNum(numbers[k + 1])) &&
				(MaxDigitNum(numbers[k]) > MaxDigitNum(numbers[k + 1])))
				std::swap(numbers[k], numbers[k + 1]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n - i - 1); j++) {
			if (numbers[j] > numbers[j + 1])
				std::swap(numbers[j], numbers[j + 1]);
		}
	}

	//Вывод вектор
	for (int k = 0; k < n; k++)
		std::cout << numbers[k] << " ";
}


// Функции для второго задания
int MaxDigitNum(int number1) {
	int MaxDigit = 0;

	while (number1 > 0) {
		int digit = number1 % 10;

		if (digit > MaxDigit) {
			MaxDigit = digit;
		}

		number1 /= 10;
	}
	return MaxDigit;
}

int FirstDigitNum(int number2) {
	int FirstDigit = 0;

	while (number2 > 0) {
		int digit = number2 % 10;
		FirstDigit = digit;
		number2 /= 10;
	}
	return FirstDigit;
}
*/