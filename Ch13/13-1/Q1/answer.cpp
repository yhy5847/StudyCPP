#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};

template <typename T>
void SwapData(T& fst, T& sec)
{
	T temp = fst;
	fst = sec;
	sec = temp;
}

int main(void)
{
	Point pt1(1, 2);
	Point pt2(3, 4);
	SwapData(pt1, pt2);
	pt1.ShowPosition();
	pt2.ShowPosition();
}