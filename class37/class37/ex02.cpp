// 2. 다음 프로그램의 실행 결과는?

#include <stdio.h>

int useCnt[5] = { 0 };

void useItem(int);

int main()
{
	useItem(4); // 1
	useItem(2); // 1
	useItem(1); // 1
	useItem(4); // 2
	useItem(0); // 1

	for (int i = 0; i < 5; i++)
	{
		printf("슬롯%의 아이템을 %d번 썼습니다.\n", i, useCnt[i]);
	}
}

void useItem(int itemNum)
{
	useCnt[itemNum]++;
}