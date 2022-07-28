// overload

#include <iostream>

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

void swap(int* (&a), int* (&b)) // &a는 레퍼런스 변수인데 그 중 int형 포인터를 가르킨다.
{
	int* tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 20, b = 30;
	double da = 2.222, db = 3.333;
	int* pa = &a, * pb = &b;

	/*
	swap(a, b);
	swapd(da, db);
	swapp(pa, pb);
	*/
	// 같은이름을 사용해도 자동으로 구분이 된다.
	swap(a, b);
	swap(da, db);
	swap(pa, pb);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;
}