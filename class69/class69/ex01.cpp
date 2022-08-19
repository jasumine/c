#define _CRT_SECURE_NO_WARNINGS // strcpy함수 사용 시 경고 제거

#include <iostream>
#include <string.h>

using namespace std;

class String
{
public:
	String()
	{
		cout << "String() : " << this << endl;
		strData = NULL;
		len = 0;
	}

	String(const char* str)
	{
		cout << "String(const char*) : " << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}

	String(const String& rhs) // 복사 생성자
	{
		cout << "String(const String &) : " << this << endl;
		len = rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData); 
	}

	~String()
	{
		cout << "~String() : " << this << endl;
		release();
		strData = NULL;
	}

	String& operator=(const String& rhs) // 복사 대입 연산자
	{
		cout << "String &operator=(const String&) : " << this << endl;
		if (this != &rhs) 
		{
			release();
			len = rhs.len;
			alloc(len);
			strcpy(strData, rhs.strData);
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

	void alloc(int len)
	{
		strData = new char[len + 1];
		cout << "strData allocted : " << (void*)strData << endl;
	}

	void release()
	{
		delete[] strData;
		if (strData) cout << "strData released : " << (void*)strData << endl;
	}
};

String getName()
{
	cout << "===== 2 =====" << endl;
	String res("Doodle");
	cout << "===== 3 =====" << endl;
	return res;
}


int main()
{
	String a;
	cout << "===== 1 =====" << endl;
	a = getName();
	cout << "===== 4 =====" << endl;

	/*
	생성자가 총 4번 발생한다.
	1. String a , 2. String res , 3. return res, 4. a = getName();
	이 과정에서 깊은 복사는 return res에서 임시 객체로, 임시 객체에서 a 로 2번 발생한다.
	res의 값이 저장되는 과정에서 임시 객체가 생성된다.
	임시객체에는 복사 생성자로 깊은복사가 일어나는 불필요한 과정이 생겨
	주소값을 받아오는 얕은 복사를 해야한다.
	*/


	String&& r = getName(); // rvalue참조자(&&r) 가 getName()을 참조한다.

	// rvalue -> 우변에만 오는 값, 수정을 할 수 없음, **임시객체**
	// lvalue -> 좌변, 우변 둘다 올 수 있는 값, 메모리상에 저장이 되어있는 값
}