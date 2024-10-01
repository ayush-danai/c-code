#include <stdio.h>
#include <ctype.h>
int main()
{
int i=0;
while(i<5)
{
char lower,upper;
printf("Enter a lower case character:");
scanf("%c",&lower);
printf("%c\n",toupper(lower));
i=i+1;
}
return 0;
}
