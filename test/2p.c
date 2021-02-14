#include<stdio.h>
testbit(int x,int y)
{
if(y>65536)
return 0;
x=x&(1<<y);
return x;
}
void main(){
int x,y;
printf("enter the xand position o to 15 values");
scanf("%d\n%d",&x,&y);
if(testbit(x,y))
printf("one");
else 
printf("zero");

}
