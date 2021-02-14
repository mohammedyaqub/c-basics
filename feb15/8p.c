//convert to little endian to big endian 
#include<stdio.h>
void main(){
unsigned int a;
printf("enter the value");
scanf("%x",&a);
a=(a<<24)|(a>>24)|((a>>8)&(0x0000ff00))|((a<<8)&(0x00ff0000));
printf("afte coverrting to big endian %x",a);
}
