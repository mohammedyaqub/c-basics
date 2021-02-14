#include<stdio.h>
void main(){
int c,b;
unsigned int a=0xaabbccdd;
b=a>>20;
c=a<<12;
printf("after changing %x,%x",b,c);
}
