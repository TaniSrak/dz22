#include <iostream>
#include <cmath>

//шаблон для вывода массива
template <typename T>
void print_arr(T arr[], const int length)
{
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}

//Task2
void stepen_chisla(int* pointer, int num)
{
	int result = 1;
	if (num == 0)
		*pointer = 1;
	else
		*pointer = std::pow(*pointer, num);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Task1 =%
	const int size = 10;
	int arr[size]{ 1,2,3,4,5,6,7,8,9,10 };

	std::cout << "Исходник:\n";
	print_arr(arr, size);

	int* parr = &arr[0];

	for (int i = 0; i < size - 1; i+= 2)
	{
		std::swap(*(parr + i), *(parr + i + 1));
	}
	std::cout << "Готовник:\n";
	print_arr(arr, size);

	//Task2
	int p, num;
	std::cout << "Введите число и его степень -> ";
	std::cin >> p >> num;

	stepen_chisla(&p, num);
	std::cout << "Итог = " << p << std::endl;

	//использовать pow меня научил антоха если что


	return 0;
}