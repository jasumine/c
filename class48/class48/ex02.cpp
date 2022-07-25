// sscanf / sprintf

#include <stdio.h>

int main()
{
	/*
	char str[] = "450";
	int n;

	sscanf_s(str, "%d", &n); // 문자열의 이름, 형식, 입력받을 변수 
	// str이 %d 형식으로 n에 들어간다
	printf("n의 값 : %d\n", n);
	*/

	int n = 450;
	char str[100];

	sprintf_s(str, "%d", n); // n이라는 값이 %d 형식으로 str에 입력 된다.
	printf("%s\n", str);
}