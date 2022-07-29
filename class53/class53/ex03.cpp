#include <iostream>

// using namespace std; 어디서나 쓸 수 있지만 편의성을 위해 제일 위에 써주는게 좋다.

int n;
void set()
{
	n = 10;
}

namespace doodle
{
	int n;
	void set()
	{
		n = 20;
	}


	namespace google
	{
		int n;
		void set()
		{
			n = 30; 
		}
	}
}

int main()
{
	using namespace std;
	using namespace doodle;

	::set();
	// set(); 이름이 같은 경우 namespace를 생략할 수 없음
	doodle::set();
	google::set(); // using namespace doodle이 있어서 doodle:: 생략가능

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;

}