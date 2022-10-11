#include <iostream>
using namespace std;
void main() {
	setlocale(0, "");
	/*Задача 2.
		Написать программу вычисления стоимости покупки, состоящей из нескольких тетрадей и
		карандашей.Ниже приведен рекомендуемый вид экрана во время выполнения программы .*/
	double price_notebook, price_pencil, sum;
	int quantity;
	cout << "Вычисление стоимости покупки.\n"
		<< "Введите исходные данные:\n"
		<< "Цена тетради (грн.) -> ";
	cin >> price_notebook;
	cout << "Количество тетрадей -> ";
	cin >> quantity;
	sum = price_notebook * quantity;
	cout << "Цена карандаша (грн.) -> ";
	cin >> price_pencil;
	cout << "Количество карандашей -> ";
	cin >> quantity;
	sum += price_pencil * quantity;
	cout << "Стоимость покупки: " << sum << " грн.";
}