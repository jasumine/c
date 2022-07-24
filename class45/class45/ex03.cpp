#include <stdio.h>

#define MAX(A,B) (((A)>(B)) ? (A): (B))

/*
int max(int a, int b)
{
	
	if (a > b) return a;
	else return b;
	
	return (a > b) ? a : b; // (조건) ? 참일경우 a 거짓일 경우 b
}
*/

int main()
{
	int a = 5, b = 10;

	printf("%d\n", MAX(a, b));
}