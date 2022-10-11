#include <iostream>
using namespace std;
void main() {
	setlocale(0, "");
	/*Задача 3.
		Написать программу вычисления стоимости покупки, состоящей из нескольких тетрадей и
		такого же количества обложек к ним.Ниже приведен рекомендуемый вид экрана во время
		выполнения программы.*/
	double price_notebook, price_cover, sum;
	int quantity;
	cout << "Вычисление стоимости покупки.\n"
		<< "Введите исходные данные:\n"
		<< "Цена тетради (грн.) -> ";
	cin >> price_notebook;
	cout << "Цена обложки (грн.) -> ";
	cin >> price_cover;
	cout << "Количество комплектов (шт.) -> ";
	cin >> quantity;
	sum = (price_notebook + price_cover) * quantity;
	cout << "Стоимость покупки: " << sum << " грн.";
}