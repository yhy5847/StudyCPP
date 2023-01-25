#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class NameCard
{
private:
	char* name;
	char* corporateName;
	char* phoneNumber;
	int position;
public:
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	NameCard(const char* n, const char* c, const char* p, int pos)
	{
		int len = (int)strlen(n) + 1;
		name = new char[len];
		strcpy(name, n);

		len = (int)strlen(c) + 1;
		corporateName = new char[len];
		strcpy(corporateName, c);

		len = (int)strlen(p) + 1;
		phoneNumber = new char[len];
		strcpy(phoneNumber, p);

		position = pos;
	}
	void ShowNameCardInfo(void) const
	{
		cout << "이름: " << name << "\n" << "회사: " << corporateName << "\n" << "전화번호: " << phoneNumber << "\n" << "직급: ";

		switch (position)
		{
		case CLERK:
			cout << "사원" << "\n\n";
			break;
		case SENIOR:
			cout << "주임" << "\n\n";
			break;
		case ASSIST:
			cout << "대리" << "\n\n";
			break;
		case MANAGER:
			cout << "과장" << "\n\n";
			break;
		}
	}
	~NameCard()
	{
		delete[] name;
		delete[] corporateName;
		delete[] phoneNumber;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", NameCard::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", NameCard::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", NameCard::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}