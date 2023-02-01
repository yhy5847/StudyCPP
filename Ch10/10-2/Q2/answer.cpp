#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend Point operator~(const Point& pt);
};

Point operator~(const Point& pt)
{
	Point rtpt(~(pt.xpos), ~(pt.ypos));
	return rtpt;
}

int main(void)
{
	Point pos;
	Point pos2(2, 2);
	pos = ~pos2;
	pos.ShowPosition();
	pos2.ShowPosition();
}