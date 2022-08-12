#include <iostream>

using namespace std;

class Vector2
{
public:
	Vector2();
	Vector2(float x, float y);

	float getX() const; // 자기 자신의 값이 변하지 않으면 const를 쓰는게 좋다.
	float getY() const;

	// 멤버 연산자 (자기 자신이 속해있음)
	Vector2 operator+(const Vector2 rhs) const;
	// operator+ 를 쓸경우 + 연산자로 인식한다.
	Vector2 operator-(const Vector2 rhs) const;
	Vector2 operator*(const float rhs) const; // 벡터 * 실수
	Vector2 operator/(const float rhs) const; // 벡터끼리 나눌수는 없다.
	float operator*(const Vector2 rhs) const;

private:
	float x;
	float y;
};

// 비멤버 연산자

/*
Vector2 sum(Vector2 a, Vector2 b)
{
	return Vector2(a.getX() + b.getX(), a.getY() + b.getY());
}
*/

Vector2 operator*(const float a, const Vector2 b)
{
	return Vector2(a * b.getX(), a * b.getY());
}


int main()
{
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	/*
	Vector2 c1 = sum(a, b);
	Vector2 c2 = a.operator+(b);
	Vector2 c3 = a + b;
	*/

	Vector2 c1 = a - b;
	Vector2 c2 = a * 1.6;
	// Vector2 c2 = 1.6 * a = (1.6f).operator*(a)여서 쓸 수 없음
	Vector2 c21 = 1.6 * a;
	Vector2 c3 = a / 2;
	float c4 = a * b;


	cout << a.getX() << ", " << a.getY() << endl;
	cout << b.getX() << ", " << b.getY() << endl;
	cout << c1.getX() << ", " << c1.getY() << endl;
	cout << c2.getX() << ", " << c2.getY() << endl;
	cout << c21.getX() << ", " << c21.getY() << endl;
	cout << c3.getX() << ", " << c3.getY() << endl;
	cout << c4 << endl;
}

Vector2::Vector2() : x(0), y(0) { }
Vector2::Vector2(float x, float y) : x(x), y(y) { }

float Vector2::getX() const { return x; }
float Vector2::getY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const
{
	return Vector2(x + rhs.x, y + rhs.y);
}

Vector2 Vector2::operator-(const Vector2 rhs) const
{
	return Vector2(x - rhs.x, y - rhs.y);
}

Vector2 Vector2::operator*(const float rhs) const
{
	return Vector2(x * rhs, y * rhs);
}

Vector2 Vector2::operator/(const float rhs) const
{
	return Vector2(x / rhs, y / rhs);
}

// 값이 실수로 나온다.
float Vector2::operator*(const Vector2 rhs) const
{
	return (x * rhs.x + y * rhs.y);
}
