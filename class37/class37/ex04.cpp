/* 4.
* 문자열을 매개변수로 받아 그 문자열에서 공백을
* 제거하여 출력하는 함수를 작성해보세요.
*/

#include <stdio.h>
/*
void print_noSpace(const char word[])
{
	int size = sizeof(word);
	for (int i = 0; i <= size; i++)
	{
		if (word[i] == ' ')
		{
			word[i] = word[i + 1];
		}
	}
	printf("%c", word);
}

int main()
{
	print_noSpace("Hello, World!\n");
	print_noSpace("My name is Doodle\n");
}
*/

void print_noSpace(const char str[]) // *str도 가능
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ') // 공백이 아닐 경우에만
		printf("%c", str[i]); // 문자를 출력한다
	}
}

int main()
{
	print_noSpace("Hello, World!\n");
	print_noSpace("My name is Doodle\n");
}
