#include <iostream>
using namespace std;
void main() {
	setlocale(0, "");
	/*������ 4.
		�������� ��������� ���������� ��������� ������� �� ���������� �� ����(���� � �������).
		��������� ������� �������� : ���������� �� ����(��); ���������� �������, �������
		���������� ���������� �� 100 �� �������; ���� ������ ����� �������.���� ��������
		������������� ��� ������ �� ����� ���������� ��������� .*/
	double distance, consumption, price, sum_double;
	int sum_grn, sum_cop;
	cout << "���������� ��������� ������� �� ���� � �������.\n"
		<< "���������� �� ���� (��) -> ";
	cin >> distance;
	cout << "������ ������� (������ �� 100 �� �������) -> ";
	cin >> consumption;
	cout << "���� ����� ������� (���.) -> ";
	cin >> price;
	sum_double = distance / 100 * consumption * price;
	sum_grn = sum_double;
	sum_cop = (sum_double - sum_grn) * 100;
	cout << "������� �� ���� � ������� ��������� � " << sum_grn << " ���. � " << sum_cop << " ���.";
}