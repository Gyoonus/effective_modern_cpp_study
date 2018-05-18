#include <stdio.h>
class X { public:int a;};

template<class T>
void swap(T& a, T& b) 
{ 
	T tmp(a);
	a = b; 
	b = tmp; 
} 
int main()
{
	X a, b;
	{a.a=1;
	b.a=2;
	swap(a, b);
	printf("%d %d\n", a.a, b.a);
	}return 0;
}
