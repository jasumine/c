// 난수

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL)); // 1970/01/01 00:00:00로 부터 지난 시간, 초 단위

	for (int i = 1; i < 10; i++)
	{
		printf("%d\n", rand() % 10 + 1 ); // % 10 은 0~9 
	}

}
