#include <iostream>
#include <limits> // Для получения минимальных и максимальных значений
#include <cstdint> // Для точных целочисленных типов

int main() {
  // Целочисленные типы
  std::cout << "Целочисленные типы:\n";

  std::cout << "int:\n";
  std::cout << "  Размер: " << sizeof(int) << " байт\n";
  std::cout << "  Минимум: " << std::numeric_limits<int>::min() << "\n";
  std::cout << "  Максимум: " << std::numeric_limits<int>::max() << "\n";
  int int_var = 10;
  int int_var2 = 5;
  std::cout << "  Пример операции: " << int_var + int_var2 << "\n\n";


  std::cout << "unsigned int:\n";
  std::cout << "  Размер: " << sizeof(unsigned int) << " байт\n";
  std::cout << "  Минимум: " << 0 << "\n"; // Для unsigned минимум всегда 0
  std::cout << "  Максимум: " << std::numeric_limits<unsigned int>::max() << "\n";
  unsigned int uint_var = 10;
  unsigned int uint_var2 = 5;
  std::cout << "  Пример операции: " << uint_var * uint_var2 << "\n\n";


  std::cout << "short:\n";
  std::cout << "  Размер: " << sizeof(short) << " байт\n";
  std::cout << "  Минимум: " << std::numeric_limits<short>::min() << "\n";
  std::cout << "  Максимум: " << std::numeric_limits<short>::max() << "\n";
  short short_var = 10;
  short short_var2 = 5;
  std::cout << "  Пример операции: " << short_var - short_var2 << "\n\n";


  std::cout << "unsigned short:\n";
  std::cout << "  Размер: " << sizeof(unsigned short) << " байт\n";
  std::cout << "  Минимум: " << 0 << "\n";
  std::cout << "  Максимум: " << std::numeric_limits<unsigned short>::max() << "\n";
  unsigned short ushort_var = 10;
  unsigned short ushort_var2 = 5;
  std::cout << "  Пример операции: " << ushort_var / ushort_var2 << "\n\n";


  std::cout << "long long:\n";
  std::cout << "  Размер: " << sizeof(long long) << " байт\n";
  std::cout << "  Минимум: " << std::numeric_limits<long long>::min() << "\n";
  std::cout << "  Максимум: " << std::numeric_limits<long long>::max() << "\n";
  long long llong_var = 10000000000;
  long long llong_var2 = 2;
  std::cout << "  Пример операции: " << llong_var * llong_var2 << "\n\n";


  std::cout << "unsigned long long:\n";
  std::cout << "  Размер: " << sizeof(unsigned long long) << " байт\n";
  std::cout << "  Минимум: " << 0 << "\n";
  std::cout << "  Максимум: " << std::numeric_limits<unsigned long long>::max() << "\n";
  unsigned long long ullong_var = 10000000000;
  unsigned long long ullong_var2 = 2;
  std::cout << "  Пример операции: " << ullong_var % ullong_var2 << "\n\n";


  // Вещественные типы
  std::cout << "Вещественные типы:\n";

  std::cout << "float:\n";
  std::cout << "  Размер: " << sizeof(float) << " байт\n";
  std::cout << "  Минимум: " << std::numeric_limits<float>::lowest() << "\n"; // lowest() для float
  std::cout << "  Максимум: " << std::numeric_limits<float>::max() << "\n";
  float float_var = 10.5f;
  float float_var2 = 2.5f;
  std::cout << "  Пример операции: " << float_var / float_var2 << "\n\n";


  std::cout << "double:\n";
  std::cout << "  Размер: " << sizeof(double) << " байт\n";
  std::cout << "  Минимум: " << std::numeric_limits<double>::lowest() << "\n";
  std::cout << "  Максимум: " << std::numeric_limits<double>::max() << "\n";
  double double_var = 10.5;
  double double_var2 = 2.5;
  std::cout << "  Пример операции: " << double_var * double_var2 << "\n\n";


  std::cout << "long double:\n";
  std::cout << "  Размер: " << sizeof(long double) << " байт\n";
  std::cout << "  Минимум: " << std::numeric_limits<long double>::lowest() << "\n";
  std::cout << "  Максимум: " << std::numeric_limits<long double>::max() << "\n";
  long double longdouble_var = 10.5L;
  long double longdouble_var2 = 2.5L;
  std::cout << "  Пример операции: " << longdouble_var - longdouble_var2 << "\n\n";
  
  // Символьный тип
  std::cout << "Символьный тип:\n";

  std::cout << "char:\n";
  std::cout << "  Размер: " << sizeof(char) << " байт\n";
  std::cout << "  Минимум: " << std::numeric_limits<char>::min() << "\n";
  std::cout << "  Максимум: " << std::numeric_limits<char>::max() << "\n";
  char char_var = 'A';
  std::cout << "  Пример: " << char_var << "\n\n";


  // Логический тип
  std::cout << "Логический тип:\n";

  std::cout << "bool:\n";
  std::cout << "  Размер: " << sizeof(bool) << " байт\n";
  std::cout << "  Минимум: " << false << "\n";
  std::cout << "  Максимум: " << true << "\n";
  bool bool_var = true;
  bool bool_var2 = false;
  std::cout << "  Пример операции (логическое И): " << (bool_var && bool_var2) << "\n";


  return 0;
}

