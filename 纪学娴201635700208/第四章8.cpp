#include <stdio.h>

 

int main()

{

	int a;

	printf("请输入成绩：");

	scanf("%d",&a);

	if(a >= 90)

		printf("等级是A\n");

	else if(a >= 80 && a <= 89)

		printf("等级是B\n");

	else if(a >= 70 && a <= 79)

		printf("等级是C\n");

	else if(a >= 60 && a <= 69)

		printf("等级是D\n");

	else

		printf("等级是E\n");

 

	return 0;

}