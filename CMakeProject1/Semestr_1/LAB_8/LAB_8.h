#include <iostream>
#include <string>
#include <algorithm>
#include <vector> 
#include <sstream> // библиотека для работы с строками (их потоками)
#pragma once


// Разделим строку для дальнейшей обработки (разделяем в вектор)
std::vector<std::string> SplitString(const std::string str) {
    std::vector<std::string> result;
    std::stringstream ss(str);
    std::string item;

    while (ss >> item) { // из ss мы записываем данные в item, а потом добавляем в вектор
        result.push_back(item);
    }

    return result;
}

// Функция для перевода строки в нижний регистр для удобства
std::string ToLower(std::string string1) {
    for (char& c : string1) {
        c = tolower(c);
    }
    return string1;
}

// Функция для подсчёта гласных
int CountVowels(const std::string string3)
{
    int count = 0;

    for (char c : string3) {
        if (std::isalpha(c) && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'))
        {
            ++count;
        }
    }
    return count;
}

bool WordContainConsonant(std::string word, size_t pos) {
    if ((word[pos] >= 'a' && word[pos] <= 'z') && (word[pos] != 'a' && word[pos] != 'e' && word[pos] != 'i' && word[pos] != 'o' && word[pos] != 'u' && word[pos] != 'y')) {
        return true;
    }
    else { return false; }
}

std::string ReverseSortWord(std::string word) {
    std::sort(word.begin(), word.end(), std::greater<char>());
    return word;
}

std::string CreateDublicateConsonant(std::string word) {
    std::string result = "";
    for (char c : word) {
        if (std::isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                result += c; // Гласные добавляем без изменений
            }
            else {
                result += c;
                result += c; // Согласные дублируем
            }
        }
    }
    return result;
}

std::vector<std::string> SortString(std::vector<std::string> string) {
    std::vector<std::string> res;
    for (int i = 0; i < string.size(); i++)
    {
        if (CountVowels(string[i]) >= 3) {
            res.push_back(ReverseSortWord(string[i]));
        }
        else {
            res.push_back(CreateDublicateConsonant(string[i]));
        }
    }
    return res;
}
