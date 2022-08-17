#define _CRT_SECURE_NO_WARNINGS // strcpy함수 사용 시 경고 제거

#include <iostream>
#include <string.h>

using namespace std;

class String
{
public:
	String()
	{
		cout << "String() 생성자 호출" << endl;
		strData = NULL;
		len = 0;
	}

	String(const char* str)
	{
		cout << "String(const char*) 생성자 호출" << endl;
		len = strlen(str);
		strData = new char[len + 1]; // null문자 고려해서 len+1만큼 할당

		cout << "strData 할당 : " << (void*)strData << endl; 
		// strData가 문자열로 인식 될 수있어서 정확하게 하기 위해 void로 형변환을 하였다.
		strcpy(strData, str); // 깊은복사 - (넣어지는 곳, 넣을 값) 
	}

	String(const String& rhs) // 객체 복사를 할 경우 &를 사용해야한다.
	{
		cout << "String(String &rhs) 생성자 호출" << endl;
		strData = new char[rhs.len + 1]; // null문자 고려해서 len+1만큼 할당
		cout << "strData 할당 : " << (void*)strData << endl;
		strcpy(strData, rhs.strData); // 깊은 복사
		// strData = rhs.strData; // 얕은 복사
		len = rhs.len; // 깊은 복사
	}

	~String()
	{
		cout << "~String() 소멸자 호출" << endl;
		delete[] strData;
		cout << "strData 해제됨 : " << (void*)strData << endl;
		strData = NULL;
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
	String s1("안녕");
	String s2(s1); 
	// 실행 시 얕은 따로 생성자가 호출 되지 않고 안녕이 출력됨
	// -> 얕은 복사
	// -> 생성자를 만들어 주어 깊은 복사로 바꾼다.

	cout << s1.getStrData() << endl;
	cout << s2.getStrData() << endl;
}