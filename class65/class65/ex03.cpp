﻿// 객체 동적 할당

#include <iostream>

using namespace std;

class Vector2
{
public:
	Vector2() : x(0), y(0)
	{
		cout << this << " : Vector2()" << endl;
	}

	Vector2(const float x, const float y) : x(x), y(y)
	{
		cout << this << " : Vector2(const float x , const float y)" << endl;
	}

	~Vector2()
	{
		cout << this << " : ~Vector2()" << endl;
	}
	float getX() const { return x; }
	float getY() const { return y; }

private:
	float x;
	float y;
};

int main()
{
	Vector2 s1 = Vector2();
	Vector2 s2 = Vector2(3, 2);

	Vector2* d1 = new Vector2();
	Vector2* d2 = new Vector2(3, 2);

	cout << "(" << d1->getX() << ", " << d1->getY() << ")" << endl;
	cout << "(" << d2->getX() << ", " << d2->getY() << ")" << endl;


	delete d1;
	delete d2;
	
	// s1 s2 d1 d2 순으로 생성 되고
	// d1 d2 s2 s1 순으로 소멸 된다.
}