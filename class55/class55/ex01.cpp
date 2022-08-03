#include <iostream>

using namespace std;

class MyClass
{
public:
	
	void PrintThis()
	{
		cout << "나의 주소는 " << this << endl;
	}
	
	/*
	void PrintThis(MyClass *ptr)
	{
		cout << "나의 주소는 " << ptr << endl;
	}
	*/
};

int main()
{
	MyClass a, b;

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 부소는 " << &b << endl;

	a.PrintThis(); // &a
	b.PrintThis(); // &b
	
	/*
	a.PrintThis(&a);
	b.PrintThis(&b);
	*/
}