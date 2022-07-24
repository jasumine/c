// enum

#include <stdio.h>

// 자료형을 지우고, 변수를 안넣어도 알아서 자동으로 0부터 순서대로 매긴다.
enum EGameState
{
	GAMESTAETE_MAINMENU,
	GAMESTAETE_PLAYING,
	GAMESTAETE_PAUSED, // = 4 라고 하면 
	GAMESTAETE_GAMEOVER, // 다음은 5가 됨.
};

/*
const int GAMESTAETE_MAINMENU = 0; // 상수는 대문자
const int GAMESTAETE_PLAYING = 1;
const int GAMESTAETE_PAUSED = 2;
const int GAMESTAETE_GAMEOVER = 3;
const int GMAGESTAET_LOGO = 4;  // 추가하면 위에서부터 다시 수정해야함
*/

int main()
{
	int currState = GAMESTAETE_MAINMENU;

	while (true)
	{
		switch(currState)
		{
			case GAMESTAETE_MAINMENU:
				break;

			case GAMESTAETE_PLAYING:
				break;

			case GAMESTAETE_PAUSED:
				break;

			case GAMESTAETE_GAMEOVER:
				break;

		}
	}

}