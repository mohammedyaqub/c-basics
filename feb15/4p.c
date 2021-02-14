//sub eithout using sub bitwise
#include<stdio.h>
void main(){
int res,a,b;
printf("enter the two values");
scanf("%d\n%d",&a,&b);
res=a+((~b)+0x01);//~=n0+1*-1;using 2s logic
printf("%d",res);
}
