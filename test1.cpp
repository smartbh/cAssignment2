#include <stdio.h>

void main()
{
	float BMI, m, kg;

	printf("Ű�� �����Ը� �Է��ϰ� Enter>\n");
	scanf("%f %f", &m, &kg);

	BMI = kg/(m*m);

	if(BMI<18.5)
		printf("BMI = %f, ��ü�� �Դϴ�.\n", BMI);
	else if (BMI<23)
		printf("BMI = %f,����ü�� �Դϴ�.\n", BMI);
	else if (BMI<25)
		printf("BMI = %f,�� ���ܰ� �Դϴ�.\n", BMI);
	else if (BMI<30)
		printf("BMI = %f,�� 1�ܰ� �Դϴ�.\n", BMI);
	else if (BMI<40)
		printf("BMI = %f,�� 2�ܰ� �Դϴ�.\n", BMI);
	else
		printf("BMI = %f,���Դϴ�.\n",BMI);
}