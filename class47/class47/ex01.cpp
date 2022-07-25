#include <stdio.h>

int main()
{
	FILE* in, *out; // 파일을 가르키는 포인터, 스트림
	int n;
	
	// 파일 열기
	// in = fopen("input.txt", "r");
	fopen_s(&in, "input.txt", "r"); // (주소값, 파일이름 , 입력 r 출력 w)
	fopen_s(&out, "output.txt", "w"); // 기존에 있는 내용 뒤에 출력 a

	fscanf_s(in, "%d", &n); // in을 입력받아서 출력
	fprintf(out,"%d\n", n); // 디버그 이후에 output 파일에 in이 입력된다.

	// 파일을 닫기
	fclose(in);
	fclose(out);
}