// Лабораторная работа № 1. Вариант 19.
// Выполнил: Убогов А.Г., группа ПИ-51.
#include <iostream>
#include <cmath>

const double PI = 3.14159265358979;
using namespace std;

// ===== Расчётные функции варианта =====
double ellipseArea(double a, double b) {
	return PI * a * b;
}

double ellipsePerimeter(double a, double b) {
	double result = PI * (3 * (a + b) - sqrt((3*a + b) * (a + 3*b)));
	return result;
}

// ===== Главная функция: меню =====
int main() {
	system("chcp 1251");
	setlocale(LC_ALL, "Rus");

	int choice;
	double a, b;

	do {
		cout << "\n=== Вариант 19. Эллипс ===\n";
		cout << "1. Площадь\n";
		cout << "2. Периметр\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт меню: ";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Введите размеры осей a и b в сантиметрах: ";
			cin >> a >> b;
			cout << "Площадь эллипса = " << ellipseArea(a, b) << " см.\n";
			break;
		case 2:
			cout << "Введите размеры осей a и b в сантиметрах: ";
			cin >> a >> b;
			cout << "Периметр эллипса = " << ellipsePerimeter(a, b) << " см.\n";
			break;
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}