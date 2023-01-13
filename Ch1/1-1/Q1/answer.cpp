#include <iostream>

int main(void)
{
	int num = 0, temp;

	for (int i = 0; i < 5; ++i)
	{
		std::cout << i + 1 << "번째 정수 입력: ";
		std::cin >> temp;

		num += temp;
	}

	std::cout << "합계: " << num;


	return 0;
}