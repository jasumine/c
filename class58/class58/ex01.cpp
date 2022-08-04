// static : 정적 <-> 동적

#include <iostream>

using namespace std;

// 0~1 float R G B 

class Color
{
public:
	Color(): r(0), g(0), b(0) { }
	Color(float r, float g, float b) : r(r), g(g), b(b) { }

	float getR() { return r; }
	float getG() { return g; }
	float getB() { return b; }

	// 전역함수가 class와 밀접한 관련이 있고, private 변수나 함수에 접근할 때
	// static을 사용하면 코드가 더 간결해지게 만들어준다
	static Color mixColors(Color a, Color b)
	{
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);;
	}

private:
	float r;
	float g;
	float b;
};

/*
Color mixColors(Color a, Color b)
{
	return Color((a.getR() + b.getR()) / 2, (a.getG() + b.getG()) / 2, (a.getB() + b.getB()) / 2);;
}
*/

int main()
{
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	// Color puple = mixColors(blue, red);
	Color puple = Color::mixColors(blue, red); // blue.mixColor로 사용할 수 있다.

	cout << "r = " << puple.getR() << ", g = " << puple.getG() << ", b = " << puple.getB() << endl;
}