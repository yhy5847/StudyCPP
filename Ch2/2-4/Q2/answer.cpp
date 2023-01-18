#include <iostream>
#include <ctime>
#include <cstdlib>

int main(void)
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 5; ++i)
	{
		std::cout << rand() % 100 << std::endl;
	}

	return 0;
}