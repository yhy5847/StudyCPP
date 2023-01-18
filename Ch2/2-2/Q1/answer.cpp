#include <iostream>

int main(void)
{
	const int num = 12;
	const int* ptn = &num;
	const int* (&rptn) = ptn;

	std::cout << *rptn << "\n" << *ptn;

	return 0;
}