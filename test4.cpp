#include <stdio.h>

void main()
{
	int year;

	printf("�⵵�� �Է��ϰ� enter>\n");
	scanf("%d", &year);
	fflush(stdin);


	if((year%4 ==0 && year%100 !=0)|| year%400 ==0)
		printf("�����Դϴ�.\n");
	else
		printf("����Դϴ�.\n");
}