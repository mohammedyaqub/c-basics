//reverse of a number
#include<stdio.h>
void main(){
int x,i;
printf("enter the value in hexadecimal");
scanf("%d",&x);
for(i=0;i<9;i++)
//w need check the bits and do right shift
{
(x&0x01)?printf("1"):printf("0");
x=x>>1;
}
}
