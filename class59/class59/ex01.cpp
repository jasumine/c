#include <iostream>

using namespace std;

// int idCounter = 1; // 객체마다 번호를 부여하는 일 (객체가 생기면 1씩 더해진다)

class Color
{
public:
	/*
	Color() : r(0), g(0), b(0)
	{
		id = idCounter; // 생성자가 호출 될 때 id 의 값을 정해주고
		idCounter++; // 다음 생성되는 객체를 위해서 ++ 해준다.
	}
	*/
	// id에 idCounter++을 대입한다. 
	Color() : r(0), g(0), b(0), id(idCounter++) { }

	Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) { }

	float getR() { return r; }
	float getG() { return g; }
	float getB() { return b; }

	int getID() { return id; }

	static Color MixColors(Color a, Color b)
	{
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}

	static int idCounter;

private:
	float r;
	float g;
	float b;

	int id;

};

int Color::idCounter = 1; // 정적변수를 초기화 하기위해 class밖에서 정의

// static을 클래스 안에 넣어두면 private함수 접근이 쉬울 뿐 아니라
// class 안에 넣어 객체를 쉽게 구분할 수 있다.
// 전역변수와 전역함수를 많이 만들지 않는게 좋다.
int main()
{
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color puple = Color::MixColors(blue, red);

	cout << " r = " << puple.getR() << " , g = " << puple.getG() << " , b = " << puple.getB() << endl;

	cout << "red.getId() = " << red.getID() << endl;
	cout << "blue.getId() = " << blue.getID() << endl;
	cout << "puple.getId() = " << puple.getID() << endl;
}