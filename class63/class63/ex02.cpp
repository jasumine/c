/*
* 1. 아래의 GameWindow 클래스의 코드에서 창 너비와 높이를 매개변수로 받는 ResizeWindow 함수를 추가하여
* 다음 조건과 같이 width 와 height의 값을 바꿀 수 있도록 하세요.
*  - 들어온 매개변수의 값과 일치하도록 창 크기를 설정할 것.
*  - 너비가 800보다 작거나 높이가 600보다 작을 때는 각각 800, 600 으로 설정할 것.
*
* 2. Gamewindow::GameWindow(int w, int h) 생성자도 마찬가지로 2번의 조건을 만족하도록 수정하세요.
*
* 3. 작성한 코드에서 상수화가 가능한 부분을 모두 상수화 하세요.
*/

#include <iostream>

using namespace std;

class GameWindow
{
public:
	GameWindow();
	GameWindow(const int, const int);

	int getWidth() const;
	int getHeight() const;

	void ResizeWindow(const int, const int);

private:
	int width;
	int height;
};


GameWindow::GameWindow() : width(800), height(600) { }
GameWindow::GameWindow(const int w, const int h) // : width(w), height(h)
{
	/*
	if (w < 800)
	{
		width = 800;
	}
	if (h < 600)
	{
		height = 600;
	}
	else
	{
		width = w;
		height = h;
	}

	if (w < 800) width = 800;
	else width = w;
	if (h < 600) height = 600;
	else height = h;
	*/
	ResizeWindow(w, h); // 코드가 중복되서 함수를 호출한다.	
}

int GameWindow::getWidth() const { return width; }
int GameWindow::getHeight() const { return height; }

void GameWindow::ResizeWindow(const int w, const int h)
{/*
	if (w < 800)
	{
		width = 800;
	}
	if (h < 600)
	{
		height = 600;
	}
	else
	{
		width = w;
		height = h;
	}
	*/

	if (w < 800) width = 800;
	else width = w;
	if (h < 600) height = 600;
	else height = h;
	/*
	if (w >= 800) width = w;
	else width = 800;
	if (h >= 600) height = h;
	else height = 600;
	*/

}

int main()
{
	GameWindow mainWindow(1300, 500);
	// mainWindow.ResizeWindow(1366,768);
	cout << mainWindow.getWidth() << "x" << mainWindow.getHeight() << endl;
}