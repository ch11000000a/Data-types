#include <iostream>
using namespace std;
void main() {
	setlocale(0, "");
	/*������ 2.
		�������� ��������� ���������� ��������� �������, ��������� �� ���������� �������� �
		����������.���� �������� ������������� ��� ������ �� ����� ���������� ��������� .*/
	double price_notebook, price_pencil, sum;
	int quantity;
	cout << "���������� ��������� �������.\n"
		<< "������� �������� ������:\n"
		<< "���� ������� (���.) -> ";
	cin >> price_notebook;
	cout << "���������� �������� -> ";
	cin >> quantity;
	sum = price_notebook * quantity;
	cout << "���� ��������� (���.) -> ";
	cin >> price_pencil;
	cout << "���������� ���������� -> ";
	cin >> quantity;
	sum += price_pencil * quantity;
	cout << "��������� �������: " << sum << " ���.";
}