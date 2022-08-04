#include <iostream>

using namespace std;

class Complex
{
public:
	/*
	Complex() // 디폴트 생성자가 0~2개를 입력 받을 수 있어 0개를 입력받는게 같아 오류가 발생한다.
	{
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) // 오버로딩
	{
		real = real_;
		imag = imag_;
	}
	
	Complex(double real_ = 0, double imag_ = 0) // 디폴트 매개변수
	{
		real = real_;
		imag = imag_;
	}
	*/
	
	// 초기화 목록 - 변수를 int a(5)하는 것 처럼 real(0)로 바꿔준다. 
	// {} 안에 넣지말고 생성자 옆에 :를 적고 뒤에 적어야한다.
	Complex() : real(0), imag(0) { }
	Complex(double real_, double imag_) : real(real_), imag(imag_) { }

	// 기존 생성자에서는 _를 사용해서 매개변수를 구분해야 하지만, 
	// 초기화목록에서는 _를 쓰지 않아도 구분이 된다.
	Complex(double real, double imag) : real(real), imag(imag) { }
	

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
	Complex c1; // 디폴트 생성자
	Complex c2 = Complex(2); 
	Complex c3(2, 3);

	cout << "c1 = " << c1.getReal() << ", " << c1.getImag() << endl;
	cout << "c2 = " << c2.getReal() << ", " << c2.getImag() << endl;
	cout << "c3 = " << c3.getReal() << ", " << c3.getImag() << endl;
}