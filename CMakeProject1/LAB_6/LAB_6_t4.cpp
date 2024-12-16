/*
#include <iostream>
#include <vector>
#include <algorithm>

// ��������� ������� ��� ���������� �������
void RemoveDuplicates(std::vector<int>& numbers);

void CreateDublicate(std::vector<int>& numbers);

int main() {
	setlocale(LC_ALL, "Russian");

	// �������������� ������
	std::cout << "������� ����� ������������������: ";
	int n;
	std::cin >> n;
	std::vector<int> numbers(n);

	// ������� 4

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

	// �������� ����������
	RemoveDuplicates(numbers);

	// �������� ����������
	CreateDublicate(numbers);

	//����� �������
	for (int k = 0; k < size(numbers); k++)
		std::cout << numbers[k] << " ";
}


// ������� ��� ��������� �������

void RemoveDuplicates(std::vector<int>& numbers) {
	if (numbers.empty()) return;

	for (int i = 0; i < (numbers.size() - 1); ++i) {
		if (numbers[i] == numbers[(i + 1)]) {
			// ������� ������� �� ������� j
			numbers.erase(numbers.begin() + i);
			// �����: ����� �������� �������� ������� ���������, ������� ����� ��������� i
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