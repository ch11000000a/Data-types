#include <iostream>
using namespace std;
void main() {
	setlocale(0, "");
	/*������ 3.
		�������� ��������� ���������� ��������� �������, ��������� �� ���������� �������� �
		������ �� ���������� ������� � ���.���� �������� ������������� ��� ������ �� �����
		���������� ���������.*/
	double price_notebook, price_cover, sum;
	int quantity;
	cout << "���������� ��������� �������.\n"
		<< "������� �������� ������:\n"
		<< "���� ������� (���.) -> ";
	cin >> price_notebook;
	cout << "���� ������� (���.) -> ";
	cin >> price_cover;
	cout << "���������� ���������� (��.) -> ";
	cin >> quantity;
	sum = (price_notebook + price_cover) * quantity;
	cout << "��������� �������: " << sum << " ���.";
}