// Лабораторная работа № 1. Вариант N.
// Выполнил: Иванов И. И., группа XX-11.
#include <iostream>
#include <cmath>

const double PI = 3.14159265358979;
using namespace std;

// ===== Расчётные функции варианта =====
double ellipseArea(double a, double b) {
	return PI * a * b;
}

// ===== Главная функция: меню =====
int main() {
	system("chcp 1251");
	setlocale(LC_ALL, "Rus");

	int choice;
	double a, b;
	do {
		cout << "\n=== Вариант 19: расчёты для Эллипса ===\n";
		cout << "1. Площадь\n";
		cout << "2. Периметр\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Введите стороны a и b: ";
			cin >> a >> b;
			cout << "Площадь = " << ellipseArea(a, b) << "\n";
			break;
		/*case 2:
			cout << "Введите стороны a и b: ";
			cin >> a >> b;
			//cout << "Периметр = " << rectanglePerimeter(a, b) << "\n";
			break;*/
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}