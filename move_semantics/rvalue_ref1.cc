#include <stdio.h>

int main()
{
	int a = 2;
	int &&b = 3+a;
	printf("%d\n",b);
}
