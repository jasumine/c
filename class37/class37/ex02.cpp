// 2. ���� ���α׷��� ���� �����?

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
		printf("����%�� �������� %d�� ����ϴ�.\n", i, useCnt[i]);
	}
}

void useItem(int itemNum)
{
	useCnt[itemNum]++;
}