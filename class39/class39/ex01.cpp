/* 
typedef struct { int x, y; } Pair; // 여러개의 변수를 한 개의 이름으로 묶는 과정

Pair p; // int p[2];
p.x = 3;
p.y = 4;
*/

#include <stdio.h>

// typedef struct { int x, y; } Point; typedef를 생략해도 실행이 된다.
struct Point { int x, y; }; // 주로 전역변수로 선언해준다.


int main()
{
	Point p;

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p)); // int형 변수가 2개여서 8
}
