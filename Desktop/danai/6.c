#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
float x1,x2,D;
printf("A:");
scanf("%d",&a);
printf("B:");
scanf("%d",&b);
printf("c:");
scanf("%d",&c);
D=sqrt(pow(b,2)-4*a*c);
x1=(-b+D)/(2*a);
x2=(-b-D)/(2*a);
printf("%5f %5f are the zero of equation\n",x1,x2);
return 0;
}
