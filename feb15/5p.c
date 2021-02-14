//add witout using + opertors in bitwise 
#include<stdio.h>
void main(){
int res,a,b;
printf("enter the two values");
scanf("%d\n%d",&a,&b);
res=a-(~b)-1;//~=n0+1*-1;using 2s logic
printf("%d",res);
}
