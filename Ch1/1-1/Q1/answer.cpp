#include <iostream>

int main(void)
{
	int num = 0, temp;

	for (int i = 0; i < 5; ++i)
	{
		std::cout << i + 1 << "��° ���� �Է�: ";
		std::cin >> temp;

		num += temp;
	}

	std::cout << "�հ�: " << num;


	return 0;
}