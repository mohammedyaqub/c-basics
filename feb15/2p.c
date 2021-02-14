//print binary
#include<stdio.h>
void main(){
int i,y;
printf("enter the to get its binary pattern");
scanf("%d",&y);
for(i=0;i<32;i++)
{

(y&0x80000000)?printf("1"):printf("0");
y=y<<1;
//y=y>>1 for starting 1 0x01
}
}

