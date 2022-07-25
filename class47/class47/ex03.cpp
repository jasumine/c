#include <stdio.h>

int main()
{
	FILE* in;
	fopen_s(&in,"ex03.cpp", "r");

	char ch;

	while (fscanf_s(in, "%c", &ch) != EOF) // end of file 
	{
		printf("%c", ch);
	}
	/*
	while (!feof(in)) // 파일의 끝을 만나면 true가 되는 함수
	{
		fscanf_s(in, "%c", &ch); // 한글자씩 출력하면서 파일 끝까지
		printf("%c", ch); // ex03 파일을 끝까지 출력한다.
	}  }}두개 출력 된다.
	*/
	fclose(in);

} // 1번 방법은 } 출력 ,2번 방법은 }} 출력