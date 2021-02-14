//swap to numbers without using third 
#include<stdio.h>
void main(){
int a,b;
printf("ent6er the num aand position");
scanf("%d\n%d",&a,&b);
b=a^b;
a=a^b;
b=a^b;
printf("ater swap a=%d\t b=%d",a,b);
}
