#include <iostream>

using namespace std;

int n; // 전역변수
void set() 
{
	// aaa::n = 10; // aaa에 속해있는 n이라는 변수
	// ::n = 10; 전역변수라고 명시해주는 것(생략해도됨)
	n = 10;
}

namespace doodle
{
	int n;
	void set();
	/* {
		// doodle::n = 20;
		n = 20; // namespace 안에 있는 변수라서 굳이 naespace::을 넣어주지 않아도 된다.
	}*/
}

namespace google
{
	int n;
	void set();
	/* {
		// google::n = 30;
		n = 30;
		// ::n = 30; // 전역변수 n이 30이 된다.
	}*/
}

int main()
{
	::set();
	doodle::set();
	google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << google::n << endl;
}

/*
namespace doodle
{
	void set()
	{
		n = 20;
	}
}

namespace google
{
	void set()
	{
		n = 30;
	}
}
*/

void doodle::set()
{
	n = 30;
}

void google::set()
{
	n = 30;
}