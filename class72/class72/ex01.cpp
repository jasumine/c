// 묵시적(암시적) 형변환 implicit conversion
// 명시적 형변환 explicit conversion

#include <iostream>
#include <string>
using namespace std;

class Item
{
public:
	Item() { };
	Item(int num) : num(num) // 변환 생성자
	{
		cout << "item(int)" << endl;
	}

	Item(string name) : name(name)
	{
		cout << "Item(string)" << endl;
	}

	Item(int num, string name) : num(num), name(name)
	{
		cout << "Item(int, string)" << endl;
	}

	// int로의 형변환 연산자 오버로딩
	explicit operator int() const // 뒤에 자료형을 적는다.
	{
		return num;
	}

	// string으로의 형변환 연산자 오버로딩
	explicit operator string() const // explicit을 적을 경우 묵시적 형변환이 불가능하다
	{
		return to_string(num) + " : " + name; 
		// 숫자를 string으로
	}

	void print()
	{
		cout << num << " : " << name << endl;
	}


private:
	int num;
	string name;
};

void printLine(string s)
{
	cout << s << endl;
}

void printLine(int n)
{
	cout << n << endl;
}

int main()
{
	Item i1 = Item(1);
	Item i2(2);
	Item i3 = 3;
	i3 = 3; // 묵시적 변환
	Item i4 = (Item)4; // 명시적 변환

	Item i5;
	i5 = string("stone");

	Item i6(1, "grass");
	Item i7 = { 2,"dirt" };
	i7 = { 2, "dirt" };
	Item i8{ 3,"wood" };

	int itemNum1 = (int)i8; // 명시적 형변환
	int itemNum2 = i7; // 묵시적 형변환
	cout << itemNum1 << endl;
	cout << itemNum2 << endl;


	printLine((string)i8); // 명시적 형변환
	printLine((int)i8); // 묵시적 형변환 (string, int 둘다 되는 경우 앞에 명시해주어야한다)
}
