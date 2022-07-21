/* 1.
* 정수 하나를 매개변수로 받아
* 그 수가 짝수이면 0, 홀수이면 1을 반환하는 함수를 작성해보세요.
*/

#include <stdio.h>

int parity(int n)
{
	if (n % 2 == 0)
	{
		return 0;
	}

	else return 1;

	//return (n % 2 + 2) % 2; 음수일 경우 - 가 붙어나와서 2를 더해 양수로 만들어 주는 작업
}

int main()
{
	printf("%d\n", parity(5));
	printf("%d\n", parity(-3));
	printf("%d\n", parity(6));
}