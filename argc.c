#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i, a, b, c, d, sum;
	
	printf("argc= %d\n", argc);

	for(i=0; i<4; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	a=atoi(argv[0]);
	b=atoi(argv[1]);
	c=atoi(argv[2]);
	d=atoi(argv[3]);

	sum=a+b+c+d;

	if (argc > 1)
	{
		printf("Sum = %d\n", sum);
	}
	else
	{
		printf("Nothing");
	}
	return 0;
}
