#include <iostream> <cmath>
using namespace std;

void task5()
{
	double e = 2.7, x = 0, y = 0;
	cout << "\n\nTask : 5\n";
	cout << "(3+e^(y-1))/(1+(x^2)*|y - tg x|)\n";
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	if (1 + pow(x, 2) * abs(y - tan(x)) == 0)
	{
		cout << "There is no solutions , try another x and y";
	}
	else {
		cout << "(3+e^(y-1))/(1+(x^2)*|y - tg x|) = ";
		cout << (3 + pow(e, y - 1)) / (1 + pow(x, 2) * abs(y - tan(x)));
	}
}
void task44()
{
	double x = 0;
	cout << "\n\nTask : 44\n";
	cout << "(√(х+1) + √(x-1)) / 2√(x)\n";
	cout << "Input x: ";
	cin >> x;
	if (x == 0 || x < 0)
	{
		cout << "There is no solutions , try another x";
	}
	else {
		cout << "(√(х+1) + √(x-1)) / 2√(x) = ";
		cout << (sqrt(x + 1) + sqrt(x - 1)) / 2 * sqrt(x);
	}
}
void task37()
{
	double l = 0, m1 = 0, m2 = 0, r = 0;
	cout << "\n\nTask : 37\n";
	cout << "l*(m1*m2 / r^2)\n";
	cout << "Input r: ";
	cin >> r;
	if (r == 0)
	{
		cout << "There is no solutions , try another r";
	}
	else {
		cout << "Input m1: ";
		cin >> m1;
		cout << "Input m2: ";
		cin >> m2;
		cout << "Input l: ";
		cin >> l;
		cout << "l*(m1*m2 / r^2) = ";
		cout << l * ((m1 * m2) / pow(r, 2));
	}
}
void task30()
{
	double x1 = 0, x2 = 0, x3 = 0;
	cout << "\n\nTask : 30\n";
	cout << "x1*x2+x1*x3+x2*x3\n";
	cout << "Input x1: ";
	cin >> x1;
	cout << "Input x2: ";
	cin >> x2;
	cout << "Input x3: ";
	cin >> x3;
	cout << "x1*x2+x1*x3+x2*x3 = " << x1 * x2 + x1 * x3 + x2 * x3;


}
void task23()
{
	double x = 0, y = 0;
	cout << "\n\nTask : 23\n";
	cout << "3^x - 4x + (y-√|x|) \n";
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	cout << "3^x - 4x + (y-√|x|) = " << pow(3,x)-4*x + (y-sqrt(abs(x)));


}
int main()
{
	task5();
	task23();
	task30();
	task37();
	task44();
}