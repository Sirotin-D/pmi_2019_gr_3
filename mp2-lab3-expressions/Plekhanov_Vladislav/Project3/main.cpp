#include <conio.h>
#include <iostream>
#include "Expressions.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	string str;

	cout << "������� ���������" << endl;
	cin >> str;
	Expression ST1(str);
	cout << endl;

	string str1 = ST1.ExpressionConvert(str);
	cout << "��������� ���������:" << endl;
	cout << ST1.ExpressionCalc(str1) << endl;

	system("pause");
	return 0;
}
