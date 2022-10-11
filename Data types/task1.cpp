#include <iostream>
using namespace std;
void main() {
	setlocale(0, "");
	/*Задача 1.
		Написать программу, которая преобразует введенное с клавиатуры дробное число в
		денежный формат.Например, число 12, 5 должно быть преобразовано к виду 12 грн. 50 коп.*/
	double price_double;
	int price_grn, price_cop;
	cout << "Преобразование числа в денежный формат.\n"
		<< "Введите дробное число -> ";
	cin >> price_double;
	price_grn = price_double;
	price_cop = (price_double - price_grn) * 100;
	cout << price_double << " грн. Это - " << price_grn << " грн.  " << price_cop << " коп.";
}