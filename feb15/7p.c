//implement the sizeoff operator
#include<stdio.h>
mysizeof(int x){
x=1;
int c=0;
while(x)
{
c++;
x=x<<1;
return c/8;
}
}
//return 
void main(){
int x,z;
printf("enter the value for its size");
scanf("%d",&x);
printf("applicable only for charaters");
z=mysizeof(x);
printf("%d",z);
}
