#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		
		printf("%i\n", atoi(argv[i]));
	}
	return (0);
}