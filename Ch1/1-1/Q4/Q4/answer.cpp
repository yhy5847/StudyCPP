#include <iostream>

int main(void)
{
	int sale;

	while (1)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sale;
		if (sale == -1) break;
		std::cout << "�̹� �� �޿�: " << 50 + sale * 0.12 << "����" <<std::endl;
	}

	std::cout << "���α׷��� �����մϴ�.";
	
	return 0;
}