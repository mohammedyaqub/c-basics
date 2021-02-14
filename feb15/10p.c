//even odd
#include<stdio.h>
void main(){
int x;
printf("enter the value to check even or odd");
scanf("%d",&x);
//printf("0000")
(x&0x01)?printf("odd"):printf("even");
}
