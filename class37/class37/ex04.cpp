/* 4.
* ���ڿ��� �Ű������� �޾� �� ���ڿ����� ������
* �����Ͽ� ����ϴ� �Լ��� �ۼ��غ�����.
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

void print_noSpace(const char str[]) // *str�� ����
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ') // ������ �ƴ� ��쿡��
		printf("%c", str[i]); // ���ڸ� ����Ѵ�
	}
}

int main()
{
	print_noSpace("Hello, World!\n");
	print_noSpace("My name is Doodle\n");
}
