#include <stdio.h>

// call-by-value : ���� �����´�.
// call-by-reference : ���� ���� �ٲ��.


// int arr[4] = { 1, 2, 3, 4 };

void printArr(int *arr) //call by reference
{
	for (int i = 0; i < 4; i++)
	{
		arr[i] *= 2; // call by reference
	}
}

int main()
{
	int arr[4] = { 1, 2, 3, 4 };
	printArr(arr); // arr == &arr[0]

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arr[i]);
	}
}
