#include<stdio.h>
#include<unistd.h>
#include<time.h>

#define MY_DEBUG  \
	printf("[%s] %s: %d\n", __FILE__ , __func__ , __LINE__);
#define CURTIME   \
	printf("[%s] %s\n", __DATE__, __TIME__);
		

int main()
{
	MY_DEBUG;
	CURTIME;
	sleep(5);
	CURTIME;
	time_t curtm = time(0);
	struct tm *curtime = localtime(&curtm);
	printf("%d\n", curtime->tm_sec);
	printf("%s\n",__func__);
	return 0;
}
