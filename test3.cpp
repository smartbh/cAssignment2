#include <stdio.h>

void main()
{
	int a, b, c ;

	int max;

	printf("���� 3���� �Է��ϰ� Enter>\n");

	scanf ("%d %d %d", &a, &b, &c);

	if(a>b)
		max = a;
	else
		max = b;

	if (max>c)
		printf("���� ū ���� %d\n", max);
	else
		printf("���� ū ���� %d\n", c);
}