// 배열 동적 할당

#include <iostream>

using namespace std;

int main()
{
	int* arr; // &arr[0] == arr 
	int len;

	cout << "동적할당 할 배열 길이 입력 : ";
	cin >> len;

	arr = new int[len]; // len 길이의 int형 배열을 arr에 할당

	for (int i = 0; i < len; i++)
	{
		arr[i] = len - i;
	}

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
	
	delete[] arr; // 배열 해제

}