#include <iostream>

using namespace std;

// 생성자: 멤버 변수 초기화
// 소멸자: 메모리 해제

// 복소수(real(실수), imag(허수))

class Complex
{
public :
	Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_)
	{
		real = real_;
		imag = imag_;
	}


	double getReal()
	{
		return real;
	}

	void setReal(double real_)
	{
		real = real_;
	}

	double getImag()
	{
		return imag;
	}
	void setImag(double imag_)
	{
		imag = imag_;
	}

private:
	double real;
	double imag;
	
};

int main()
{
	Complex c1; // Complex() 생성자 호출
	Complex c2 = Complex(2, 3); // Complex(real_, imag_) 생성자 호출
	Complex c3(2, 3);
	Complex c4 = { 2,3 }; //배열처럼 중괄호를 써도 된다.
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 }; 

	cout << "c1 = " << c1.getReal() << ", " << c1.getImag() << endl;
	cout << "c2 = " << c2.getReal() << ", " << c2.getImag() << endl;
	cout << "c3 = " << c3.getReal() << ", " << c3.getImag() << endl;
}