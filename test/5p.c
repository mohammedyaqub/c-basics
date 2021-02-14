//serch pattern for 11 if count the ttimes
#include<stdio.h>
int func(int num, int pattern)
{
int i,c=31;
while(c)
{
if((num&)//i++;
c=c<<pattern;
}
return num;
//printf("%d",c);
}

void main(){
int d,num,pattern ;
printf("enter the number in hexadecimal");
scanf("%x\n%x",&num,&pattern);
d=func(num,pattern);
printf("%d",d);
}
