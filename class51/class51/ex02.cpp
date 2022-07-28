#include <iostream>

using namespace std;

int inventory[64] = { 0 }; // 보유하고 있는 갯수
int totalScore = 0;
/*
void getItem(int itemId)
{
	inventory[itemId]++;
}

void getItem(int itemId, int cnt)
{
	inventory[itemId] += cnt;
}

void getItem(int itemId, int cnt, int score) // score 
{
	inventory[itemId] += cnt;
	totalScore += score;
}
*/

// 디폴트 매개변수를 쓸 경우 score 뒤에 디폴트 매개변수가 아닌 매개변수를 넣을 수 없다.
// 디폴트 매개변수는 오른쪽부터 넣어서 사용해야함.
void getItem(int itemId, int cnt = 1 , int score = 0)
{
	inventory[itemId] += cnt;
	totalScore += score;
}


int main()
{
	getItem(6, 5);
	getItem(3, 2);
	getItem(3); // 1개만 얻음
	getItem(11, 34, 7000);

	cout << totalScore << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << inventory[i] << ' ';
	}
	cout << endl;
}