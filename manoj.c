#include<stdio.h>
int main(){
    float sp,cp,l,p;
    printf("enter the cost price and selling price");
    scanf("%f\n %f\n",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0){
        printf("profit is %f",p);
    }
    if(l>0){
        printf("loss is %f",l);
    }
    if(p==0){
        printf("no profit no loss");
    }
}