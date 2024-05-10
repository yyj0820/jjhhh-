#include <stdio.h>

#define leapYear(y)  ((y%4==0)&&(y%100!=0)||(y%400==0))    //宏定义

int main()
{
	int year;
	
	scanf("%d",&year);
	if(leapYear(year))
		printf("%d is a leap year\n",year);
	else
		printf("%d is not a leap year\n",year);
	return 0;
}