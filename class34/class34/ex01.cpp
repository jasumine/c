// prototype : 원형, 시제품
// 함수를 앞에서 정의한 후 main을 써야하지만, 선언만 하고 main함수 이후에 정의해도 된다.

#include <stdio.h>
// 로봇

// =====함수 선언=====(프로토 타입)
void walk(int); // 매개변수 타입만 적어도 된다.
void rotate(int angle);
void drawSquare();


int main()
{
	drawSquare(); // 함수 호출
}

// ======함수 정의======
// 걷기 기능
void walk(int distance)
{
	printf("%dcm를 걸었습니다.\n", distance);
}

// 돌기 기능
void rotate(int angle)
{
	printf("%d도 회전했습니다.\n", angle);
}

// 정사각형으로 걷는 함수
void drawSquare()
{
	for (int i = 1; i <= 4; i++)
	{
		walk(10); //40cm 걷고
		rotate(90); //90회전하기
	}
}