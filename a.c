#include<stdio.h>
#include<execinfo.h>

void fun()
{
	printf("%p\n",&fun);
	fun();
}

int main()
{
	for(int i = 0; i < 2; i++)
	printf("%p\n",main);
	fun();
	return 0;
}
