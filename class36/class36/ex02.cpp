#include <stdio.h>

// call-by-value
void printArr(int (* arr)[3]) // 2차원 배열은 배열포인터에 넣을 수 있다.
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}

		printf("\n");
	}
}

int main()
{
	int arr[2][3] = { {1, 2, 3},{4, 5, 6} };
	printArr(arr); // &arr[0]
}