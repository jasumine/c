#include <iostream>

using namespace std;

class String 
{
public:
	String()
	{
		strData = NULL; // 그냥 선언만 한 경우, 아무것도 가르키지 않을 때
		len = 0;
	}
	String(const char* str)
	{
		len = strlen(str);
		strData = new char[len + 1]; // +1을 해주는 이유는 배열의 마지막에 \0이 있기  때문
		strcpy(strData, str); // 깊은복사 - (넣어지는 곳, 넣을 값) 
	}
	~String()
	{
		delete[] strData;
	}

	char* getStrData() const
	{
		return strData;
	}

	int getLen()const
	{
		return len;
	}


private:
	char* strData;
	int len;
};


int main()
{
	String s;
}