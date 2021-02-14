//whether a num is power of 1 2 4 8 16 32 64 
#include<stdio.h>
void main(){
int x,c=0;
printf("enter the value");
scanf("%d",&x);
/*if there is only one set bit in whole given num
          2^5 2^4 2^3 2^2 2^1 2^0
	  32   16  8   4   2   1
	  0    0    0  0   0   1= 1 its power of 2 
*/
while(x)
{
x=x&(x-1);
c++;
}
if(c==1)
printf("the given no is power of 2 ");
else 
printf("given num is not power of 2 ");
}
