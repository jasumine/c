// getchar / putchar
// gets / puts

#include <stdio.h>

int main()
{
	/*
	char ch;

	ch = getchar(); // �Է¹��� ������ return �ϴ� �Լ����� ch�� �־���Ѵ�.
	putchar(ch); // ����ϴ� �Լ�
	*/
	
	char str[100];

	gets_s(str); // �迭�� �Է� (������ ���Եȴ�)
	puts(str);
}