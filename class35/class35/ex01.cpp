// ��� �Լ� (�Լ� �ȿ� �ڱ� �ڽ�(�Լ�)�� �ִ� ��)
// �� (��� ��) ��(�б�(��� ��, �б� ��) ��)
// recursion

#include <stdio.h>
/*
void rec()
{
	printf("***\n");
	rec();
}

int main()
{
	rec(); // ��� ***�� ȣ�� �ȴ�. ���ѹݺ�
}
*/

/*
void rec(int n)
{
	printf("n = %d\n", n);
	rec(n+1);
}

int main()
{
	rec(1); //��� 1�� ��������.
}
*/

void rec(int n)
{
	if (n > 5) return;
	printf("n = %d\n", n);
	rec(n + 1);
}

int main()
{
	rec(1); // 5������ ��µ�.
}