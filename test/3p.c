#include<stdio.h>
void main(){
int c=0,a,b,y;
printf("enter the a and b  values");
scanf("%d\n%d",&a,&b);
y=a^b;
while(y)
{
y=y&(y-1);
c++;
} printf(" y is %x",y);
printf("%xwe need to change %d to convert %x",a,c,b);
}
