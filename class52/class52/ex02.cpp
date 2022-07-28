/*
2. 범위 기반 for문을 사용하여 이차원 배열을 출력해 보세요.
*/

#include <iostream>

using namespace std;

int main()
{
	int arr[2][3] = { {1,2,3,}, {4,5,6} };

	// 작성
	
	/*
	for (int i : arr[2])
	{
		for (int j : arr[i][3])
		{
			cout << arr[i][j] << ' ';
		}
	}
	*/

	// 배열 포인터를 이용
	for (int(&i)[3] : arr)
	{
		for (int& j : i)
		{
			cout << j << ' ';
		}
		cout << endl;
	}

	// 같은 원리
	for (int(*ln)[3] = arr; ln < arr + 2; ln++)
	{
		for (int* c = *ln; c < *ln + 3; c++)
		{
			cout << *c << ' ';
		}
	}
	/*
	for (auto(&i)[3] : arr)
	{
		for (auto& j : i)
		{
			cout << j << ' ';
		}
		cout << endl;
	}
	*/

}