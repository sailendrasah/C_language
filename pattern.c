#include<stdio.h>
// #include<stdlib.h>
int main(){
    int n;
    int a,b,c,d,e;
    int total;
    printf("enter the value");
    scanf("%d",&n);
    a=n%10;
    total=a;
    b=(n/10)%10;
    total=total+b;
c=(n/100)%10;
total=total+c;
d=(n/1000)%10;
total=total+d;
e=(n/10000)%10;
total=total+e;

    printf("%d",total);

}
