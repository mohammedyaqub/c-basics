//find the possiblities to count the num of ones in given num
#include<stdio.h>
void main(){
int y,c=0;
printf("enter the value");
scanf("%d",&y);
while(y){
y=y&(y-1);//it takes less iterations
c++;
}printf("total one in given num is %d",c);
}
