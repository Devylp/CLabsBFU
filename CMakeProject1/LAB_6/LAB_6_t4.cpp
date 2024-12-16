/*
#include <iostream>
#include <vector>
#include <algorithm>

// Прототипы функции для четвертого задания
void RemoveDuplicates(std::vector<int>& numbers);

void CreateDublicate(std::vector<int>& numbers);

int main() {
	setlocale(LC_ALL, "Russian");

	// Инициализируем вектор
	std::cout << "Введите длину последовательности: ";
	int n;
	std::cin >> n;
	std::vector<int> numbers(n);

	// Задание 4

	// Вводим вектор
	for (int i = 0; i < n; i++) {
		int num;
		std::cin >> num;
		numbers[i] = num;
	}

	// Сортировка вектора
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n - i - 1); j++) {
			if (numbers[j] > numbers[j + 1])
				std::swap(numbers[j], numbers[j + 1]);
		}
	}

	// Удаление дубликатов
	RemoveDuplicates(numbers);

	// Создание дубликатов
	CreateDublicate(numbers);

	//Вывод вектора
	for (int k = 0; k < size(numbers); k++)
		std::cout << numbers[k] << " ";
}


// Функции для четвёртого задания

void RemoveDuplicates(std::vector<int>& numbers) {
	if (numbers.empty()) return;

	for (int i = 0; i < (numbers.size() - 1); ++i) {
		if (numbers[i] == numbers[(i + 1)]) {
			// Удаляем элемент по индексу j
			numbers.erase(numbers.begin() + i);
			// Важно: после удаления элемента индексы смещаются, поэтому нужно уменьшить i
			--i;
		}
	}
}

void CreateDublicate(std::vector<int>& numbers) {
	if (numbers.empty()) return;

	numbers.insert(numbers.end(), numbers.begin(), numbers.end());
	sort(numbers.begin(), numbers.end());
}
*/