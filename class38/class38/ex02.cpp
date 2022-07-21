#include <stdio.h>

int main()
{
	typedef int Pair[2]; //배열을 정의
	Pair point = { 3,4 }; // int point[2] = { 3,4 };와 같다.

	printf("(%d,%d)\n", point[0], point[1]);
}