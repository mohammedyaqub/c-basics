//replace
#include<stdio.h>
int binary(int);
int functionreplace(int n,int  p,int  x,int  y );
void main(){
int x,y,p,n,z;//p=start n=end
printf("enter the  n=va and pos  xand y");
scanf("%d%d%d%d",&n,&p,&x,&y);
binary(x);
binary(y);
int functionreplace(n,p,x,y);
}
functionreplace(int n,int p,int x,int y)
{
int z;
z=p+1;//2^n-1
z=y&z;
y=y<<(p-n);
z=z<<(p-n);
x=~z;
x=x/y;
return x;
}
int binary(int x)
{
while (x)
{
(x&0x01)?printf("1"):printf("0");
x=x>>1;
}
}
