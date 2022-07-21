#include <stdio.h>

int main()
{
	typedef const char* String;
	String name = "Doodle"; // const char* name = "Doodle";와 같다.

	printf("이름: %s\n", name);
}