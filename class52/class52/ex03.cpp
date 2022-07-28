/*
3. 다음과 같은 함수 정의에서 컴파일 오류가 나는 이유를 찾아보세요.
*/

void drawRectangle(int l, int r, int t, int b)
{
	// 사각형의 왼쪽 x1와 오른쪽 x2 값, 위쪽 y1과 y2값
}

// 디폴트 매개변수는 오른쪽 부터 적어야함.
/*
void drawRectangle(int x = 0, int y = 0, int w, int h)
{
	// 사각형 왼쪽 위 꼭짓점 (x,y) 가로 길이w 세로길이 h 

}*/

void drawRectangle(int w, int h, int x = 0, int y = 0)
{
	
}
// 위와 아래 모두 int 변수 4개를 사용