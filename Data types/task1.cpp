#include <iostream>
using namespace std;
void main() {
	setlocale(0, "");
	/*������ 1.
		�������� ���������, ������� ����������� ��������� � ���������� ������� ����� �
		�������� ������.��������, ����� 12, 5 ������ ���� ������������� � ���� 12 ���. 50 ���.*/
	double price_double;
	int price_grn, price_cop;
	cout << "�������������� ����� � �������� ������.\n"
		<< "������� ������� ����� -> ";
	cin >> price_double;
	price_grn = price_double;
	price_cop = (price_double - price_grn) * 100;
	cout << price_double << " ���. ��� - " << price_grn << " ���.  " << price_cop << " ���.";
}