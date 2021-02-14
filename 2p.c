#include<stdio.h>
void main(){
int n,tbits,k;
printf("enter the numbr");
scanf("%d",&n);
printf("enter the total num of bits");
scanf("%d",&tbits);
int a[tbits];
for(k=0;k<tbits;k++)
a[k]=(n&(1<<k))>>k;
for(k=tbits-1;k>=0;k--)
printf("%d",a[k]);
printf("\n");
}
