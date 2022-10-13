//������������ ������
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

// ������ 1
template <typename T> void swap_num(T* num1, T* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
// ������ 2
void pow_func(int &num1, int m) {

	if (m == 0) {
		std::cout << 1 << "\n";
		return;
	}
	int tmp = num1;
	int number = 1;
	num1 = number;

	for (int i = 1; i <= m; i++) {
		num1 = num1 * tmp;
	}

	return;

}

int main() {
	setlocale(LC_ALL, "Russian");
	//������ 1. 
	std::cout << "������ 1. �������� ������� ������ � �������� �������� �������\n";
	const int length = 10;
	int array[length] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << "\n";

	std::cout << "����������� ������:\n[";
	int* pArr = array;
	for (int i = 0; i < 10; i++)
		std::cout << *(pArr + i) << ", ";
	std::cout << "\b\b]\n";

	std::cout << "�������� ������:\n[";

	for (int i = 0; i < length; i++) {
		if (i % 2 == 0)
			swap_num((pArr + i), (pArr + i + 1));
	}

	for (int i = 0; i < 10; i++)
		std::cout << *(pArr + i) << ", ";
	std::cout << "\b\b]\n";
	std::cout << "\n\n";

	//������ 2. 
	int n, m;
	int& refN = n;
	std::cout << "������ 2. ���������� ����� � �������\n\n";
	std::cout << "������� �����: ";
	std::cin >> n;
	std::cout << "������� �������: ";
	std::cin >> m;
	pow_func(refN, m);
	std::cout << "�������� ����� � ������� " << m << " = " << n;
	std::cout << "\n";
	return 0;
}