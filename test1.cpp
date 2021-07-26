#include <stdio.h>

void main()
{
	float BMI, m, kg;

	printf("키와 몸무게를 입력하고 Enter>\n");
	scanf("%f %f", &m, &kg);

	BMI = kg/(m*m);

	if(BMI<18.5)
		printf("BMI = %f, 저체중 입니다.\n", BMI);
	else if (BMI<23)
		printf("BMI = %f,정상체중 입니다.\n", BMI);
	else if (BMI<25)
		printf("BMI = %f,비만 전단계 입니다.\n", BMI);
	else if (BMI<30)
		printf("BMI = %f,비만 1단계 입니다.\n", BMI);
	else if (BMI<40)
		printf("BMI = %f,비만 2단계 입니다.\n", BMI);
	else
		printf("BMI = %f,비만입니다.\n",BMI);
}