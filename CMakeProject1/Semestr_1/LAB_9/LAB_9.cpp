#include <iostream>
#include <cstdint> // Для uint8_t

int main() {
	short num = 0x1234; // Пример числа (в шестнадцатеричной системе)

	std::cout << "Число: 0x" << std::hex << num << std::dec << std::endl; // Вывод исходного числа

	// Little-endian:
	std::cout << "Little-endian:" << std::endl;
	uint8_t* ptr = reinterpret_cast<uint8_t*>(&num); // Приведение к указателю на uint8_t
	std::cout << "Байт 1 (младший): 0x" << std::hex << static_cast<int>(ptr[0]) << std::dec << std::endl;
	std::cout << "Байт 2 (старший): 0x" << std::hex << static_cast<int>(ptr[1]) << std::dec << std::endl;


	// Big-endian (симуляция):  В реальности вам нужно будет работать с системой, использующей big-endian
	std::cout << "\nBig-endian (симуляция):" << std::endl;
	std::cout << "Байт 1 (старший): 0x" << std::hex << static_cast<int>(ptr[1]) << std::dec << std::endl;
	std::cout << "Байт 2 (младший): 0x" << std::hex << static_cast<int>(ptr[0]) << std::dec << std::endl;

	return 0;
}
