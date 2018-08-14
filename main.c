#include <stdio.h>

// uninitialized variable stored in bss
int global;

int main(int argc, char const *argv[])
{
	printf("hello world!\n");

	return 0;
}
