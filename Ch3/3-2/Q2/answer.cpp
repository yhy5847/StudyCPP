#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
private:
	char save[30];

public:
	void SetString(const char* str);
	void ShowString();
};

void Printer::SetString(const char* str)
{
	strcpy(save, str);
}

void Printer::ShowString()
{
	cout << save << endl;
}

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}