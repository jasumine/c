// prototype : ����, ����ǰ
// �Լ��� �տ��� ������ �� main�� ���������, ���� �ϰ� main�Լ� ���Ŀ� �����ص� �ȴ�.

#include <stdio.h>
// �κ�

// =====�Լ� ����=====(������ Ÿ��)
void walk(int); // �Ű����� Ÿ�Ը� ��� �ȴ�.
void rotate(int angle);
void drawSquare();


int main()
{
	drawSquare(); // �Լ� ȣ��
}

// ======�Լ� ����======
// �ȱ� ���
void walk(int distance)
{
	printf("%dcm�� �ɾ����ϴ�.\n", distance);
}

// ���� ���
void rotate(int angle)
{
	printf("%d�� ȸ���߽��ϴ�.\n", angle);
}

// ���簢������ �ȴ� �Լ�
void drawSquare()
{
	for (int i = 1; i <= 4; i++)
	{
		walk(10); //40cm �Ȱ�
		rotate(90); //90ȸ���ϱ�
	}
}