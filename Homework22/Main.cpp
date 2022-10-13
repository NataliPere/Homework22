//Персональный шаблон
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

// Задача 1
template <typename T> void swap_num(T* num1, T* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
// Задача 2
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
	//Задача 1. 
	std::cout << "Задача 1. Поменять местами чётные и нечётные элементы массива\n";
	const int length = 10;
	int array[length] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << "\n";

	std::cout << "Изначальный массив:\n[";
	int* pArr = array;
	for (int i = 0; i < 10; i++)
		std::cout << *(pArr + i) << ", ";
	std::cout << "\b\b]\n";

	std::cout << "Итоговый массив:\n[";

	for (int i = 0; i < length; i++) {
		if (i % 2 == 0)
			swap_num((pArr + i), (pArr + i + 1));
	}

	for (int i = 0; i < 10; i++)
		std::cout << *(pArr + i) << ", ";
	std::cout << "\b\b]\n";
	std::cout << "\n\n";

	//Задача 2. 
	int n, m;
	int& refN = n;
	std::cout << "Задача 2. Возведение числа в степень\n\n";
	std::cout << "Введите число: ";
	std::cin >> n;
	std::cout << "Введите степень: ";
	std::cin >> m;
	pow_func(refN, m);
	std::cout << "Введённое число в степени " << m << " = " << n;
	std::cout << "\n";
	return 0;
}