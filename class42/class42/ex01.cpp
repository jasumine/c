#include <stdio.h>

struct Time
{
	int h, m, s; // 멤버 변수

	
	int totalSec() // 멤버 함수. 매개 변수를 안넣어도 된다.
	{
		return 3600 * h + 60 * m + s;
	}
};

/*
총 몇초인지
int totalSec(Time t)
{
	return 3600 * t.h + 60 * t.m + t.s;
}
*/


int main()
{
	Time t = { 1,22,48 };

	printf("%d\n", t.totalSec());
}