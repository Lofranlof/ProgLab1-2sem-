#include "ProgLab1.h"
using namespace std;
using namespace stuff;

int main()
{
	setlocale(LC_ALL, "Russian");

	/*cout << "Проверяем задание 3" << endl;
	int num1, num2;
	cout << "Введите два числа" << endl;
	cin >> num1 >> num2;
	swap_pointers(&num1, &num2);
	cout << "Остаток от деления " << num1 << endl << endl;

	cout << "Проверяем задание 6" << endl;
	double num;
	cout << "Введите число" << endl;
	cin >> num;
	roundUp_pointers(&num);
	cout << "Округленное число " << num << endl << endl;

	cout << "Проверяем задание 11" << endl;
	int radius, decrease;
	cout << "Введите два числа" << endl;
	cin >> radius >> decrease;
	decreaseRadius_pointers(&radius, &decrease);
	cout << "Новый радиус = " << radius << endl << endl;*/

	cout << "Проверяем задание 14" << endl;
	int i, j;
	int matrix[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	cout << "Было: ";
	for (i = 0; i < 3; i++)
	{
		cout << endl;
		for (j = 0; j < 3; j++)
			cout << matrix[i][j] << ' ';
	}

	cout << endl << "\n";

	/*matrixTransposition_pointers(matrix);

	cout << "Стало: ";
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 3; j++)
			cout << matrix[i][j] << ' ';
	}*/

	matrixTransposition_links(matrix);

	cout << "Стало: ";
	for (i = 0; i < 3; i++)
	{
		cout << endl;
		for (j = 0; j < 3; j++)
			cout << matrix[i][j] << ' ';
	}
	return 0;
}
