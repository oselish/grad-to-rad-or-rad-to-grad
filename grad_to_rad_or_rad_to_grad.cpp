#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int choice;
	setlocale(LC_ALL, "Rus");
	double grad, rad, pi = 3.1415926535897932384626433832795;
	cout << "Выберите действие: \n1) Градусы в радианы \n2) Радианы в градусы" << endl; cin >> choice;
	if (choice == 1)
	{
		cout << "Введите градусы: ";  cin >> grad;
		rad = (grad * 2) / 360;
		cout << grad << " градусов = " << rad << "*pi радиан = " << rad * pi << " радиан" << endl;
	}
	else if (choice == 2)
	{
		int choice_1;
		cout << "Выберите вид записи числа в радианах:\n1) Число\n2) Число умноженное на число пи\n"; cin >> choice_1;
		cout << "Введите радианы: "; cin >> rad;
		if (choice_1 == 1)
		{
			grad = rad * (360 / (2 * pi));
			cout << rad << " радиан = " << grad << " градусов" << endl;
		}
		else if (choice_1 == 2)
		{
			grad = rad * (360 / 2);
			cout << rad << "*pi радиан = " << grad << " градусов" << endl;
		}
		else
		{
			cout << "Нужно ввести \"1\" или \"2\"!" << endl;
		}
	}
	else
	{
		cout << "Нужно ввести \"1\" или \"2\"!" << endl;
	}
}
