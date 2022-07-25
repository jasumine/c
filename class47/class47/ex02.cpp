#include <stdio.h>

int main()
{
	FILE* in;
	int n;

	fopen_s(&in, "intput.txt", "r"); // intput은 없는 파일이여서 null로 반환
	
	// printf("in = %d\n", in); // 0으로 출력된다.

	if (in != nullptr)
	{
		fscanf_s(in, "%d", &n);
		printf("%d\n", n);
		fclose(in);
	}
}