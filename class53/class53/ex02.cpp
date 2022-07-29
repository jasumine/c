#include <iostream>

using namespace std;

int n;
void set()
{
	n = 10;
}

// 2중 namespace
namespace doodle
{
	// int n;
	void set();
	/* 
	{
		n = 20; // int n; 을 뒤에 적으면 ::n = 20; 이 된다.
	}
	*/

	namespace google
	{
		// int n;
		void set();
		/* 
		{
			n = 30; // int n; 을 뒤에 적으면 doodle::n = 30; 이 된다.
		}
		*/
		int n; 
	}
	int n;
}

int main()
{
	::set();
	doodle::set();
	doodle::google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;
}

// 함수의 정의를 밖으로 빼면 어떤 n인지 혼동하지 않고 제대로 작동한다.
void doodle::set()
{
	n = 20; 
}

void doodle::google::set()
{
	n = 30;
}