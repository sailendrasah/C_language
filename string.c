#include<stdio.h>
int main(){
    int num,a,b,c,d,e,x;
    printf("enter the value:");
    scanf("%d\n",&num);
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    e=(num/10000);
// reverse number 
x=a*10000+b*1000+c*100+d*10+e;
printf("%d\n",x);
if(x==num){
    printf("%d",num);
}
else{
    printf("not");
}
}