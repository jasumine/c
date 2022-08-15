// 정적 할당: int a;
// 동적 할당: 프로그램 실행 중에 변수를 메모리에 할당하는 것

#include <iostream>

using namespace std;

int main()
{
	// a 메모리 할당
	int *a = new int(5); // operator new 연산자

	cout << a << endl; // a의 주소값
	cout << *a << endl; // 5

	*a = 10;

	cout << a << endl;
	cout << *a << endl; // 10

	// a 메모리 해제
	delete a; 

}
