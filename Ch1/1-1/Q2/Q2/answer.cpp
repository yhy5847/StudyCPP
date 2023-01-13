#include <iostream>

int main(void)
{
	char name[16], phone_num[14];
	
	std::cout << "이름 입력: ";
	std::cin >> name;
	std::cout << "전화 번호: ";
	std::cin >> phone_num;

	std::cout << name << " : " << phone_num;

	return 0;
}