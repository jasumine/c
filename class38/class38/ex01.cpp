// type define 
// 형을 정의한다.
// 특별한 의미가 부여될 때 쓰면 좋다.

#include <stdio.h>

int main()
{
	typedef int Int32; // 형을 정의한다.
	Int32 n = 20; // int n = 20; 와 같다

	printf("%d\n ", n);
	printf("%d\n", sizeof(Int32)); //int와 같은 크기를 가지고 있다.
}