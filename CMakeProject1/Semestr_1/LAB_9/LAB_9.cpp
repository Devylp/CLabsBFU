#include <iostream>
#include <cstdint> // ��� uint8_t

int main() {
	short num = 0x1234; // ������ ����� (� ����������������� �������)

	std::cout << "�����: 0x" << std::hex << num << std::dec << std::endl; // ����� ��������� �����

	// Little-endian:
	std::cout << "Little-endian:" << std::endl;
	uint8_t* ptr = reinterpret_cast<uint8_t*>(&num); // ���������� � ��������� �� uint8_t
	std::cout << "���� 1 (�������): 0x" << std::hex << static_cast<int>(ptr[0]) << std::dec << std::endl;
	std::cout << "���� 2 (�������): 0x" << std::hex << static_cast<int>(ptr[1]) << std::dec << std::endl;


	// Big-endian (���������):  � ���������� ��� ����� ����� �������� � ��������, ������������ big-endian
	std::cout << "\nBig-endian (���������):" << std::endl;
	std::cout << "���� 1 (�������): 0x" << std::hex << static_cast<int>(ptr[1]) << std::dec << std::endl;
	std::cout << "���� 2 (�������): 0x" << std::hex << static_cast<int>(ptr[0]) << std::dec << std::endl;

	return 0;
}
