/*
------------
HAPPY PONGAL
------------
*/

#include<stdio.h>
int main()
{
	int i;
	char a[]="HAPPY PONGAL ";
	for(i=0;a[i]!=0;i++)
	{
		printf("%*.*s \n",i,i,a);
		sleep(1);
		system("clear");
	}
	return 0;
}
