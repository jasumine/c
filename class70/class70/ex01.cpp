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

	String(const String& rhs) // const가 붙어서 rvalue값도 들어간다.
	{
		cout << "String(const String &) : " << this << endl;
		len = rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData);
	}

	String(String&& rhs) // 이동 생성자, rvalue 참조를 매개변수로 받는다.
	{
		cout << "String(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData; // 얕은 복사
		rhs.strData = NULL; 
		// &&rhs == res.strData -> "Doodle" <- 임시객체.strData 가르키는 상황이였는데
		// null로 바꾸면 임시객체만 Doodle만 가르키는 상황이된다.
		// delete를 해주어도 res.strData의 값은 null이기때문에 "Doodle"은 지워지지 않는다.
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

	String& operator=(String&& rhs) // 얕은 복사
	{
		cout << "String &operator=(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
		return *this; // a = b = c 때문에 사용한다.
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
	{ // 깊은 복사가 일어날 경우 출력된다.
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
	# a=임시객체(rvalue) 
	임시객체는 rvalue 인데 &&rhs를 생성해주기 전에는 
	const &rhs에도 rvalue가 들어갈 수 있어서 깊은 복사가 발생했다.
	&&rhs를 이동생성자를 통해 얕은 복사로 필요없는 메모리 할당을 하지 않아도 된다.
	*/
}