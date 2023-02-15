#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for(i=0; i<4; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
