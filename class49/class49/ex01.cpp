#include <iostream>

using namespace std;

/*
* 이름 성처럼 구분하기 위해 붙여주는 것
namespace a
{
	int n;
}

namespace b
{
	int n;
}
*/

int main()
{
	// a::n = 10;
	// b::n = 20;

	std::cout << "Hello, World!" << 10 <<'c'<<std::endl; // end line(줄바꿈) == '\n'

	cout << "Hello, World!" << endl; // using namespace std를 쓰면 std::생략가능
}