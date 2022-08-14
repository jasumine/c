// 3. 코드 출력결과

#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass() : num(cnt++) , ch('\n') { } // num = cnt +1 이라서 0을 넣고 1이 더해진다.
	
	void Check(MyClass* ptr)
	{
		if (ptr + num == this) // ptr + num == ptr[num] == &obj[num]
		{
			cout << num << endl;
		}
	}

	static int cnt;
private:
	int num;
	char ch;
};

int MyClass::cnt = 0;

int main()
{
	MyClass obj[5];

	cout << "Test #1 : " << endl;
	for (int i = 0; i < 5; i++)
	{
		obj[i].Check(obj); // 1 2 3 4 5 -> 0 1 2 3 4 
		// obj == &obj[0]
	}

	cout << "Test #2 : " << endl;
	for (MyClass& i : obj) // 0부터 4 까지
	{
		i.Check(obj); // 1 2 3 4 5 -> 0 1 2 3 4 
	}

	cout << "cnt = " << MyClass::cnt << endl; // 10 -> 5
}