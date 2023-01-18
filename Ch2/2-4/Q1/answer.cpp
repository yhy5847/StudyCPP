#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main(void)
{
	char a[20] = "asdf";
	char b[20];

	std::cout << strlen(a) << std::endl;
	
	std::cout << strcat(a, "asdf") << std::endl;
	
	std::cout << strcpy(b, a) << std::endl;
	
	std::cout << strcmp(b, a) << std::endl;

	return 0;
}