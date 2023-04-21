#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

#define BUF_SIZE 65536
int main(int argc, char *argv[])
{
	FILE *srce, *dest;
	size_t in, out;
	char buf[BUF_SIZE];
	int bufsize;
	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s \n", argv[0]); exit(1);
	}
	bufsize = atoi(argv[1]); /*lib function;converts string into int*/
	if (bufsize > BUF_SIZE)
	{
		fprintf(stderr,"Error: %s: max. buffer size is %d\n",argv[0], BUF_SIZE);
		exit(1);
	}
	srce = fopen(argv[2], "r");
	if (NULL == srce)
		exit(2);
	dest = fopen(argv[3], "w");
	if (dest < 0) exit(3);
	while (1)
	{
		in = fread(buf, 1, bufsize, srce);
		if (0 == in) break;
		out = fwrite(buf, 1, in, dest);
		if (0 == out) break;
	}
	fclose(srce);
	fclose(dest);
	exit(0);
}
