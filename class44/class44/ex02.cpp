#include <stdio.h>

// 매크로
#define PI 3.14159 // 파이를 3.14159로 정의한다.

int main()
{
	float a = PI;


	printf("π = %.2f\n", PI);
	// printf("&PI = %d\n", &PI); 주소로 못불러 온다.

	// PI = 0;  상수에 상수를 넣지 못함.
}