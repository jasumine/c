// 범위 기반 for문

#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };

	/*
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	

	for (int n : arr) // arr안에 있는 모든 n을 본다.
	{
		// int n = arr[n]; 이다.
		cout << n << ' ';
		n++; // n을 더해도 arr[n]의 값이 바뀌지 않음
	}
	*/

	for (int &n : arr) // &를 추가해서 arr의 값을 바꿀 수 있음
	{
		cout << n << ' ';
		n++; 
	}
	
	cout << endl;

	for (int n : arr)
	{
		cout << n << ' ';
	}
	cout << endl;
}