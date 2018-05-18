#include <stdio.h>

int bar(int &&a)
{
	int abc = a;
}

int main()
{
	bar(1+1);
}

