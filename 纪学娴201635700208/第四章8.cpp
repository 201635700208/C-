#include <stdio.h>

 

int main()

{

	int a;

	printf("������ɼ���");

	scanf("%d",&a);

	if(a >= 90)

		printf("�ȼ���A\n");

	else if(a >= 80 && a <= 89)

		printf("�ȼ���B\n");

	else if(a >= 70 && a <= 79)

		printf("�ȼ���C\n");

	else if(a >= 60 && a <= 69)

		printf("�ȼ���D\n");

	else

		printf("�ȼ���E\n");

 

	return 0;

}