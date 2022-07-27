#include <iostream>

using namespace std;

/*
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
*/

int main()
{
	/*
	int a(5);
	int& p = a;
	p = 10;

	cout << p << endl;
	cout << a << endl;

	===================
	
	int a(5), b(7);

	swap(a, b);

	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
	*/

	// r-value (수정할 수 없는 값) l-value(수정할 수 있는 값)
	// 메모리 상에 저장되어 있는 것만 가능하다. 수랑 식은 저장되어 있는게 아님

	int a(5);
	int& r1 = a; // r-value 
	int&& r2 = 3; // l-value
	int&& r3 = a * a;  // l-value
	// &&를 하면 &를 했을때와 반대로 된다.