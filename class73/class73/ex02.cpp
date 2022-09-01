#include <iostream>

using namespace std;

// 2. ㅁ부분에 알맞은 기호를 넣고 출력결과를 예측해보세요.

int main()
{
	int a = 10, b = 20, c = 30;
	int* p = &a;
	int& r = b;
	int** pp = &p; // p라는 포인터를 가르키는 더블 포인터
	int* (&rp) = p; // p라는 포인터를 가르키는 레퍼런스 변수 rp

	r = c / *p; // -> c / a -> r = b = 3
	rp = &c; // rp = p = c 
	**pp = 40; // a = 40
	*p = 50; // c = 50
	*pp = &a; // *pp = p = a
	*rp = 60; // rp = p = a = 60 

	/*
	* r은 b를 가르키므로 c / *p 즉 c / a 으로 b = 3
	* rp는 p 를 가르킨다. p는 a가 아닌c 를 가르킨다
	* **pp는 pp->p->c 즉 c를 가르킨다. c = 40
	* *p는 현재 c를 가르키고있어서 c = 50
	* *pp 는 pp->p p의 값에 &a를 넣는다 *p = a
	* *rp는 *p 즉 a를 의미한다 a = 60 
	*/

	cout << a << endl; // 50  --> a = 60
	cout << b << endl; // 20 --> b = 3
	cout << c << endl; // 30 --> c = 50
	cout << *p << endl; // 50 --> p는 a를 가르키므로 *p = 60
	cout << r << endl; // 3 --> r = b = 3
	cout << **pp << endl; // 50 --> **pp는 a를 가르키므로 **pp = 60
	cout << *rp << endl; // 60 --> *rp == *p == a  *rp = 60

	/* ===========================
	int a = 10, b = 20, c = 30;
	int* p = ㅁa;
	int& r = ㅁb;
	int** pp = ㅁp; // p라는 포인터를 가르키는 더블 포인터
	int* (&rp) = ㅁp; // p라는 포인터를 가르키는 레퍼런스 변수 rp

	r = c / ㅁp;
	rp = ㅁc;
	ㅁpp = 40;
	ㅁp = 50;
	*pp = ㅁa;
	ㅁrp = 60;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << *p << endl;
	cout << r << endl;
	cout << **pp << endl;
	cout << *rp << endl;
	*/
}