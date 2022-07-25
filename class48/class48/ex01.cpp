// getchar / putchar
// gets / puts

#include <stdio.h>

int main()
{
	/*
	char ch;

	ch = getchar(); // 입력받은 변수를 return 하는 함수여서 ch에 넣어야한다.
	putchar(ch); // 출력하는 함수
	*/
	
	char str[100];

	gets_s(str); // 배열에 입력 (공백이 포함된다)
	puts(str);
}