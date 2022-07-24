#include <stdio.h>

#define SQUARE(X) ((X)*(X))

/*
int square(int a)
{
	return a * a;
}
*/

int main()
{
	int a;
	scanf_s("%d", &a);
	printf("%d\n",SQUARE(a)); 
	printf("%d\n", 100 / (SQUARE(a)));
	// '100 / SQUARE(a)' 는 100 / a * a 라서 '100 / (SQUARE(a))'를 해야함
	printf("%d\n", SQUARE(a - 1));
	// SQUARE(a -1)은 a-1 * a-1 이라서 a = 5 일 경우 5 - 1 * 5 - 1가 되면서 -1이 나옴
	// 매크로에서 ((X)*(X))로 꼭 해줘야한다.
}