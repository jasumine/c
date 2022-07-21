// 재귀 함수 (함수 안에 자기 자신(함수)이 있는 것)
// 학 (배울 학) 교(학교(배울 학, 학교 교) 교)
// recursion

#include <stdio.h>
/*
void rec()
{
	printf("***\n");
	rec();
}

int main()
{
	rec(); // 계속 ***가 호출 된다. 무한반복
}
*/

/*
void rec(int n)
{
	printf("n = %d\n", n);
	rec(n+1);
}

int main()
{
	rec(1); //계속 1씩 더해진다.
}
*/

void rec(int n)
{
	if (n > 5) return;
	printf("n = %d\n", n);
	rec(n + 1);
}

int main()
{
	rec(1); // 5까지만 출력됨.
}