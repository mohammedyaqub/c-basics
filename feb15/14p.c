#include<stdio.h>
int binary(int);
void main(){
int x,y,p,n,z;
printf("enter the  n=value and pos  xand y");
scanf("%d%d%d%d",&n,&p,&x,&y);
binary(x);
binary(y);
z=p+1;//2^n-1
z=y&z;
y=y<<(p-n);
z=z<<(p-n);
x=~z;
x=x/y;
printf("%x%x",x,y);
}
int binary(int x)
{
while (x)
{
(x&0x01)?printf("1"):printf("0");
x=x>>1;
}
}
