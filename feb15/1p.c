//write a program to set clear toggle and check
#include<stdio.h>
#define SET_BIT (x|(0x01<<p))
#define CLEAR_BIT (x&~(0x01<<p))
#define TOGGLE_BIT (x^(0X01<<p))
#define CHECK_BITS (x&(0x01<<p)?1:0)
void main(){
int x,p;
printf("enter the number and its position ");
scanf("%d\n%d",&x,&p);
//printf("1.set a particular bit \n 2 for clear the part bit\n 3 toggle a particular bit\n 4 to check the particular\n")
//printf("after the set the particular bit is %d",);
//switch(n)
printf("after the set the particular bit is %d\n",SET_BIT);//x|(0x01<<p));
printf("after  clear the particular bit is %d\n",CLEAR_BIT);//x&~(0x01<<p));
printf("after  toggle the particular bit is %d\n",TOGGLE_BIT);//x^(0x01<<p));
printf("to check the particular bit is  on/off %d\n",CHECK_BITS);//x&(0x01<<p)?1:0);
//printf()
}
