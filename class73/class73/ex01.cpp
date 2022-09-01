#include <iostream>

using namespace std;

// 1. 다음 프로그램의 실행 결과는?

int main()
{
	char str[] = "Hello, World!";

	cout << str << endl;
	cout << *str << endl;
}

/*
Hello, World!
str의 주소값 -> H // *str = str[0] 
주소값은 &str이다.
*/