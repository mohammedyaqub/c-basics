//implement exor using 
#include<stdio.h>
void main(){
int x,y;
printf("enter the two values for exor operations");
scanf("%d\n%d",&x,&y);/*logic
exor res 0=~;1=same
00 0  we get exp as ~x&y+x&~y
01 1
10 1
11 0*/
printf("after performing exor %d ",(~x&y)+(x&~y));
}
