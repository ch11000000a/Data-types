#include <iostream>
using namespace std;
void main() {
	setlocale(0, "");
	/*Задача 4.
		Написать программу вычисления стоимости поездки на автомобиле на дачу(туда и обратно).
		Исходными данными являются : расстояние до дачи(км); количество бензина, которое
		потребляет автомобиль на 100 км пробега; цена одного литра бензина.Ниже приведен
		рекомендуемый вид экрана во время выполнения программы .*/
	double distance, consumption, price, sum_double;
	int sum_grn, sum_cop;
	cout << "Вычисление стоимости поездки на дачу и обратно.\n"
		<< "Расстояние до дачи (км) -> ";
	cin >> distance;
	cout << "Расход бензина (литров на 100 км пробега) -> ";
	cin >> consumption;
	cout << "Цена литра бензина (грн.) -> ";
	cin >> price;
	sum_double = distance / 100 * consumption * price;
	sum_grn = sum_double;
	sum_cop = (sum_double - sum_grn) * 100;
	cout << "Поездка на дачу и обратно обойдется в " << sum_grn << " грн. и " << sum_cop << " коп.";
}