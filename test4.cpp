#include <stdio.h>

void main()
{
	int year;

	printf("년도를 입력하고 enter>\n");
	scanf("%d", &year);
	fflush(stdin);


	if((year%4 ==0 && year%100 !=0)|| year%400 ==0)
		printf("윤년입니다.\n");
	else
		printf("평년입니다.\n");
}