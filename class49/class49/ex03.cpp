#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	string str;
	str = "Hello";

	cout << str << endl;
	*/

	string name;

	cout << "이름 입력 : ";
	cin >> name;

	string message = "안녕하세요 , " + name + " 님.";

	cout << message << endl;

}