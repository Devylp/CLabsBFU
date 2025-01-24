/*
Лаба 5
1. Дана последовательность целых чисел {Aj}. Найти произведение чисел,
лежащих на отрезке [-2,20], наименьшее из таких чисел и номер этого числа
в последовательности.

2. Дано натуральное число N (N<10^9). Найти сумму четных цифр числа N.
*/


#include <iostream>
#include <vector>
#include <limits>
#include <cmath>
using namespace std;

//Инициализация переменных (глобальных) для второго задания
int counter, number_min; // number_min - это номер минимального элемента.
int min_number = numeric_limits<int>::max(), CounterCorrectNum;
long long int prod = 1;

// Прототип функции для второго задания
int SummEvenDigits(int number);

int main() {
    setlocale(LC_ALL, "Russian"); // Установка языка на русский для корректного вывода в консоль

    
    // Задание 1
    cout << "Введите длину массива (вектора) целых чисел: ";
    int n;
    cin >> n;
    vector<int> numbers(n);

    // Ввод массива (вектора)
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers[i] = num;
    }

    // Обработка массива (вектора)
    for(int j = 0; j < numbers.size(); j++) {
        if (-2 <= numbers[j] && numbers[j] <= 20) {
            ++CounterCorrectNum;
            ++counter;
            prod *= numbers[j];
            if (numbers[j] < min_number) {
                min_number = numbers[j];
                number_min = counter;
            }
        }

    }

    // Конечная проверка и вывод в консоль
    if ( !(numbers.empty()) && (prod != pow(numbers[0], numbers.size())) && (CounterCorrectNum != 0) ) {
        cout << "Произведение: " << prod << endl << "Минимальное число: " << min_number << endl
            << "Номер минимального числа: " << number_min;
    }

    else if ( !(numbers.empty()) && (prod == pow(numbers[0], numbers.size())) && (CounterCorrectNum != 0) ) {
        number_min = 1;
        cout << "Произведение: " << prod << endl << "Минимальное число: " << min_number << endl
            << "Номер минимального числа: " << number_min;
    }

    else if (!(numbers.empty()) && (CounterCorrectNum == 0) ) {
        cout << "Вектор не пустой, но подходящих значении не найдено.";
    }

    else cout << "Вектор пустой. Никаких значении не найдено.";
    

    // Задание 2
    int Number;

    cin >> Number;
    cout << SummEvenDigits(Number);
    
}

// Функция для второго задания
int SummEvenDigits(int number) {
    int summ_even_digits = 0;

    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            summ_even_digits += digit;
        }
        number /= 10;
    }
    return summ_even_digits;
}
