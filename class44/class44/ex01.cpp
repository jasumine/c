// 상수 : 변하지 않는 수
// 변수 : 변할 수 있는 수
// const, 매크로, enum 

#include <stdio.h>

int main()
{
	const float PI = 3.14159; // conast를 붙여서 상수로 바꾼다. 상수는 대문자

	float a = PI;


	printf("π = %.2f\n", PI);
	printf("&PI = %d\n", &PI); // PI를 메모리에 저장
}