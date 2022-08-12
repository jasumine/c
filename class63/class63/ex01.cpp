// 1. 다음 프로그램의 출력 결과는?

#include <iostream>

using namespace std;

int n = 0;
namespace A
{
	int n = 0;
	namespace B
	{
		void set() { n = 10; }
		int n = 0;
	}
}

namespace C
{
	void set();
	int n = 0;
}

void C::set() { n = 20; } // 정의가 분리 되어있음.

int main()
{
	using namespace A::B;

	set();
	// set 뒤에 b::n이 있어서 a::n=10이 된다.
	C::set();

	cout << ::n << endl; // 0
	cout << A::n << endl; // 0 -> 10
	cout << A::B::n << endl; // 10 -> 0
	cout << C::n << endl; // 20
}