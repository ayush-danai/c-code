#include <stdio.h>
#include <math.h>
int main()
{
float x,y,z,q;
printf("Enter x:");
scanf("%f",&x);
q=10-pow(x,5);
z=q/3;
//y=pow(z,0.5);
y=sqrt(z);
printf("y=%f\n",y);
return 0;
}
