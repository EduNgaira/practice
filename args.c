#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])
{
	int i, sum;
	
	printf("%d\n", argc);

	if(argc>1)
	{
		for(i=0;i<argc;i++)
		{
			printf("Argv[%d]= %s\n",i, argv[i]);
			sum+=atoi(argv[i]);
		}
		printf("Sum=%d\n", sum);
	}
	return 0;
}
