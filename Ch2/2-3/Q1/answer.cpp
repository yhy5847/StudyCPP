#include <iostream>

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2);

int main(void)
{
	Point* p1 = new Point;
	p1->xpos = 1;
	p1->ypos = 2;
	
	Point* p2 = new Point;
	p2->xpos = 3;
	p2->ypos = 4;

	Point &answer = PntAdder(*p1, *p2);

	std::cout << answer.xpos << "\n" << answer.ypos <<std::endl;

	delete p1;
	delete p2;
	delete &answer;

	return 0;
}

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point *pt = new Point;
	pt->xpos = p1.xpos + p2.xpos;
	pt->ypos = p1.ypos + p2.ypos;

	return *pt;
}