#include <stdio.h>
#include <math.h>
int main()
{
    float a,b;
    printf("plesase enter a number\n");
    scanf("%f",&a);
    while(a>=1000||a<=0){
        printf("please enter another number\n");
        scanf("%f",&a);
    }
    b=sqrt(a);
    printf("a=%7.0f,b=%7.0f\n",a,b);
    return 0;
}