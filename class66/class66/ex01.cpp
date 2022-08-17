#include <iostream>

using namespace std;

int main()
{
	int* a = new int(5);
	int* b = new int(3);
	
	
	// 얕은 복사 (참조만 복사)
	// a = b; // a에 b를 대입한다 -> a는 3이 나온다. -> int 5는 접근할 수가 없어짐
	
	// 깊은 복사 (값을 복사)
	*a = *b; // int(5)의 값이 (3)으로 바뀐다.

	delete a; // a가 3을 가르키고 있어서 5의 메모리는 해제되지 않음
	delete b; // b가 가르킨 메모리는 a가 해제해서 b가 해제할 메모리가 없어서 에러가 뜬다.
}