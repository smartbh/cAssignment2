#include <stdio.h>

void main()
{
	int a, b, c ;

	int max;

	printf("정수 3개를 입력하고 Enter>\n");

	scanf ("%d %d %d", &a, &b, &c);

	if(a>b)
		max = a;
	else
		max = b;

	if (max>c)
		printf("제일 큰 수는 %d\n", max);
	else
		printf("제일 큰 수는 %d\n", c);
}