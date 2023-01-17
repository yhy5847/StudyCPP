#include <iostream>
using namespace std;

void Inc(int& x);
void ChangeSign(int& x);

int main(void)
{
	int x = -2;
	Inc(x);
	cout << x << endl;
	ChangeSign(x);
	cout << x;

	return 0;
}

void Inc(int& x)
{
	x += 1;
}

void ChangeSign(int& x)
{
	x *= -1;
}