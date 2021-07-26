#include <stdio.h>

void main()
{
	int result, jumsu;
	printf("점수를 입력해 주세요");
	scanf("%d", &jumsu);

	result = jumsu/10;
	switch(result)
	{
		case 9 : printf("A\n");
			break;
		case 8 : printf("B\n");
			break;
		case 7 : printf("C\n");
			break;
		default :
			printf("D\n");
	}
}