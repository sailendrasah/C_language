#include<stdio.h>
int main(){
    int d,c;
    printf("enter the value of d");
    scanf("%d",&d);
    printf("enter the value of c");
    scanf("%d",&c);

int temp=d;
d=c;
c=temp;
printf("d is %d and c is %d\n",d,c);
}