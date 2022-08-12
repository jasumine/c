// 벡터(내접은 위, 아래 각각 곱하고 더해준다)
// 멤버 메서드의 선언, 정의 분리하기

#include <iostream>

using namespace std;

class Vector2
{
public:
	Vector2();
	Vector2(float x, float y);

	float getX() const;
	float getY() const;

	// 정적
	static Vector2 sum(Vector2 a, Vector2 b)
	{
		return Vector2(a.x + b.x, a.y + b.y);
	}

	// 동적
	Vector2 add(Vector2 rhs) // right hand side
	{
		return Vector2(x + rhs.x, y + rhs.y); // 객체자신의 x와 y에 더하는 것
	}

private:
	float x;
	float y;
};

/*
Vector2 sum(Vector2 a, Vector2 b)
{
	return Vector2(a.getX() + b.getY(), a.getY() + b.getY());
}
*/
int main()
{
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = Vector2::sum(a, b);
	Vector2 c2 = a.add(b); // a + b
	// Vector2 c = a + b; 연산자 오버로딩

	cout << a.getX() << ", " << a.getY() << endl;
	cout << b.getX() << ", " << b.getY() << endl;
	cout << c1.getX() << ", " << c1.getY() << endl;
	cout << c2.getX() << ", " << c2.getY() << endl;
}

// 정의 분리하기
// class 이름을 namespace처럼 사용한다.
Vector2::Vector2() : x(0), y(0) { }
Vector2::Vector2(float x, float y) : x(x), y(y) { }

float Vector2::getX() const { return x; }
float Vector2::getY() const { return y; }