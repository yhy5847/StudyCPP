#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}
};

class Police
{
private:
	int handcuffs;
	Gun* pistol;
public:
	Police(int bnum, int bcuff)
		:handcuffs(bcuff)
	{
		if(bnum > 0)
		{
			pistol = new Gun(bnum);
		}
		else
		{
			pistol = NULL;
		}
	}
	Police(Police& pl)
		:handcuffs(pl.handcuffs)
	{
		if (pl.pistol != NULL)
		{
			this->pistol = new Gun(*(pl.pistol));
		}
		else
		{
			this->pistol = NULL;
		}
	}
	Police& operator=(Police& pl)
	{
		
		if (this->pistol != NULL)
		{
			delete this->pistol;
		}

		if (pl.pistol != NULL)
		{
			this->pistol = new Gun(*(pl.pistol));
		}
		else
		{
			this->pistol = NULL;
		}

		this->handcuffs = pl.handcuffs;

		return *this;
	}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
	void Shot()
	{
		if (pistol == NULL)
		{
			cout << "Gut BBANG!" << endl;
		}
		else
		{
			pistol->Shot();
		}
	}
	~Police()
	{
		if (pistol != NULL)
		{
			delete pistol;
		}
	}
};

int main(void)
{
	Police p1(5, 3);
	Police p2 = p1;
	p2.PutHandcuff();
	p2.Shot();

	Police p3(2, 4);
	p3 = p1;
	p3.PutHandcuff();
	p3.Shot();

	return 0;
}