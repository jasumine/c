// const
// 1. 매개변수의 상수화 (모든 함수)
// 2. 메서드의 상수화 (멤버 메서드)

#include <iostream>

using namespace std;

class Account
{
public:
	Account() : money(0) { }
	Account(int money) : money(money) { }

	void Deposit(const int d)
	{
		// d = money; 입금하는 금액에 오류가 생기지 않도록 const를 적어준다.
		money += d;;
		cout << d << "원을 예금했다!!" << endl;
	}

	void Draw(int d)
	{
		if (money >= d)
		{
			money -= d;
			cout << d << "원을 인출했다!!" << endl;
		}
	}

	// 상수형 메소드
	int ViewMoney() const
	{
		// money++; 값을 수정하지 못함.
		return money;
	}


	// 상수형 메소드가 아니지만 간혹 쓰인다.
	const int ViewMoney()
	{
		return money;
	}



private:
	int money;

};


int main()
{
	Account doodle(100);

	doodle.Deposit(100); // 200
	doodle.Draw(20); // 180

	cout << doodle.ViewMoney() << endl;
}