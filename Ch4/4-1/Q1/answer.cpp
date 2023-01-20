#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMemebers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSalesResult() const
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller& seller, int money)
	{
		if (money < 0)
		{
			cout << "0���� ���� �ݾ��� �Է��� �� �����ϴ�.\n";
			return;
		}

		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult() const
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMemebers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, -2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}