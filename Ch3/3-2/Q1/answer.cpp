#include <iostream>
using namespace std;

class Calculator
{
private:
	int count_add;
	int count_min;
	int count_mul;
	int count_div;

public:
	void Init();
	double Add(double x, double y);
	double Min(double x, double y);
	double Mul(double x, double y);
	double Div(double x, double y);
	void ShowOpCount();
};

void Calculator::Init()
{
	count_add = 0;
	count_min = 0;
	count_mul = 0;
	count_div = 0;
}

double Calculator::Add(double x, double y)
{
	count_add++;
	return x + y;
}

double Calculator::Min(double x, double y)
{
	count_min++;
	return x - y;
}

double Calculator::Mul(double x, double y)
{
	count_mul++;
	return x * y;
}

double Calculator::Div(double x, double y)
{
	count_div++;
	return x / y;
}

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << count_add << " »¬¼À: " << count_min << " °ö¼À: " << count_mul << " ³ª´°¼À: " << count_div;
}

int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();

	return 0;
}