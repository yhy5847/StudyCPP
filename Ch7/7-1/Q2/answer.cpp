#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	void ShowMyFriendInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~MyFriendInfo()
	{
		delete[] name;
	}
};

class MyFriendDetailInfo :public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* n, int a, const char* ad, const char* p) : MyFriendInfo(n, a)
	{
		addr = new char[strlen(ad) + 1];
		strcpy(addr, ad);
		phone = new char[strlen(p) + 1];
		strcpy(phone, p);
	}
	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl << endl;
	}
	~MyFriendDetailInfo()
	{
		delete[] addr;
		delete[] phone;
	}
};

int main(void)
{
	MyFriendDetailInfo f("양호열", 24, "아산", "010-1111-1111");
	f.ShowMyFriendDetailInfo();

	return 0;
}