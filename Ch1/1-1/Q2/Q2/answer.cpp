#include <iostream>

int main(void)
{
	char name[16], phone_num[14];
	
	std::cout << "�̸� �Է�: ";
	std::cin >> name;
	std::cout << "��ȭ ��ȣ: ";
	std::cin >> phone_num;

	std::cout << name << " : " << phone_num;

	return 0;
}