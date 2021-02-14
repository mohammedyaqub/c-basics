//multiply a number by a using bit shift
#include<stdio.h>
void main(){
int x,z;
printf("enter the value");
scanf("%d",&x);
z=(x<<3)+x;//if x=2then2power 3=8*3+3=27
printf("%d",z);
}
