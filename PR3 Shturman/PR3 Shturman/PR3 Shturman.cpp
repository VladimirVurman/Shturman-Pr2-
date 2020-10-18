// PR3 Shturman.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

void task20() {
	cout << "\n\nTask20";
	int a = 0;
	cout << "\nInput number of month (1-12)";
	cout << "\n\nNumber: \n";
	cin >> a;

	if (a == 1 || a == 2 || a == 12)
	{
		cout << "It is Winter in that month";
	}
	else
	{
		if (a == 3 || a == 4 || a == 5)
		{
			cout << "It is Spring in that month"
				;
		}
		else
		{
			if (a == 6 || a == 7 || a == 8)
			{
				cout << "It is Summer in that month"
					;
			}
			else {
				if (a == 9 || a == 10 || a == 11)
					cout << "It is Autumn in that month ";
				else { cout << "Error, we have only 12 months," << a << " is not real"; }
			};
		}
	}
	;
}
void task6()
{
	cout << "\n\nTask6";
	double A = 0, B = 0, C = 0, D = 0, E = 0, X1 = 0, X2 = 0;
	cout << "\nInput coefficients of the square euqation( A , B , C)";
	cout << "\ncoefficient A: \n";
	cin >> A;
	if (A == 0) {
		cout << "\n\nThat was not square euqation";
	}



	else {
		cout << "\ncoefficient B: \n";
		cin >> B;
		cout << "\ncoefficient C: \n";
		cin >> C;
		cout << "Is your euqation looks like:\n\n" << A << "*x^2 + " << B << "*x" << "+" << C << " = 0";
		cout << "\n\n Type 1 If it looks like it , if no type 0 \n";
		cin >> D;
	}

	if (D == 1)
	{
		E = pow(B, 2) - 4 * A * C;
		X1 = (B * (-1) + sqrt(E)) / 2 * A;
		X2 = (B * (-1) - sqrt(E)) / 2 * A;
		cout << "X1 = " << X1 << " X2 = " << X2;
	}
	else {

		cout << "\n\nCheck which coefficients you voted , maybe you miss something , programm is over";
	}
}

	int main()
	{
		task20();
		task6();
	}
	
	

	