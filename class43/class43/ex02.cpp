// 2. 빈칸에 들어갈 코드는?

#include <stdio.h>

struct Point
{
	int x, y;
};

void pSwap(Point* p)
{
	//빈칸

	int tmp;
	tmp = p->x;
	p->x = p->y;
	p->y = tmp;

}

int main()
{
	Point pos = { 3,4 };

	pSwap(&pos);

	printf("(%d, %d)\n", pos.x, pos.y);
}