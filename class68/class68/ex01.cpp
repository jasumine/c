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
		strData = NULL; // 빈문자열
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
		strData = NULL; // 초기화
	}
	
	String &operator=(const String &rhs) // 레퍼런스 변수
	// 레퍼런스를 사용할 경우 불필요한 복사를 막아준다
	{
		// &rhs에 객체 자신을 넣을 경우 
		// delete를 하면 오류가 발생해서 주소값이 같은지 확인해준다.
		if (this != &rhs) // 주소값
		{
			delete[] strData; // 메모리를 새롭게 할당하기 위해서 해제부터 한다.
			strData = new char[rhs.len + 1]; // null문자 고려해서 len+1만큼 할당
			cout << "strData 할당 : " << (void*)strData << endl;
			strcpy(strData, rhs.strData); // 깊은 복사
			// strData = rhs.strData; // 얕은 복사
			len = rhs.len; // 깊은 복사
		}
		return *this;
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
	String s3;
	// s3.operator=(s1); // 기본 생성자에 대입 -> 연산자 오버로딩
	s3 = s1;
	String s4("Hello");
	s4.operator=(s1);
	
	/*
	String s4;
	s4 = s3 = s1; // s3에 s1의 값을 넣고, s4에 s3 즉 s1의 값이 들어간다.

	s3.operator=(s3); 를 할경우 s3의 
	*/

	cout << s1.getStrData() << endl;
	cout << s2.getStrData() << endl;
	cout << s3.getStrData() << endl;
	cout << s4.getStrData() << endl;
}