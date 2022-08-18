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

	String(const String& rhs)
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

	String& operator=(const String& rhs) 
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
}