#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "LAB_8.h"

int main() {
    
    std::string line;
    std::string result;

    std::ifstream fin;
    fin.open("C://Users//admin//source//repos//LAB_8//LAB_8//line.txt"); // Открываем файл 
    
    // Отработка ошибок
    if (fin.is_open())
    {
        std::getline(fin, line);
    }
    fin.close();

    SortString(SplitString(ToLower(line)));
    
    for (int i = 0; i < (SortString(SplitString(ToLower(line)))).size(); i++) {
        std::cout << (SortString(SplitString(ToLower(line))))[i] << " ";
    }
}
