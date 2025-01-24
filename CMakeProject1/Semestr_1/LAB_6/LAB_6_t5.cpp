/*
#include <iostream>
#include <vector>
#include <algorithm>

// ��������� ������� ��� ������ �������
bool NumberContainDigit(int num, int digit);

int CountDigits(int num1, int digitS);

int main() {
	setlocale(LC_ALL, "Russian");

	// �������������� ������
	std::cout << "������� ����� ������������������: ";
	int n;
	std::cin >> n;
	std::vector<int> numbers(n);

	// ������� 5

	// ������ ������
	for (int i = 0; i < n; i++) {
		int num;
		std::cin >> num;
		numbers[i] = num;
	}

	// ���������� �������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n - i - 1); j++) {
			if (numbers[j] > numbers[j + 1])
				std::swap(numbers[j], numbers[j + 1]);
		}
	}

	// ��������� �������
	for (int i = numbers.size() - 1; i >= 0; --i) {
		bool remove = false;
		for (int j = 0; j <= 9; ++j) {
			if (CountDigits(numbers[i], j) >= 2) {
				remove = true;
				break;
			}
		}
		if (remove) {
			numbers.erase(numbers.begin() + i);
		}
	}

	for (int i = numbers.size() - 1; i >= 0; --i) {
		if (NumberContainDigit(numbers[i], 5)) {
			numbers.insert(numbers.begin() + i + 1, numbers[i]);
		}
	}

	std::sort(numbers.begin(), numbers.end());

	//����� �������
	for (int k = 0; k < size(numbers); k++)
		std::cout << numbers[k] << " ";


}

// ������� ��� ������ �������
bool NumberContainDigit(int num, int digit) {
	bool result;

	while (num > 0) {
		result = ((num % 10 == digit) ? true : false);
		if (result) { return true; }
		num /= 10;
	}
	return result;
}

int CountDigits(int num1, int digitS) {
	int count = 0;

	while (num1 > 0) {
		if (digitS == (num1 % 10)) { ++count; }
		num1 /= 10;
	}
	return count;
}
*/