#include <stdio.h>

void myprint(const char* str)
{
	printf("%s\n", str);
}

void hello()
{
	myprint("hello");
}

void world()
{
	myprint("world");
}

int main()
{
	myprint("start");
	for(int i = 0; i < 5; i++){
		hello();
	}
	for(int i = 0; i < 5; i++){
		world();
	}
	myprint("end");
}

