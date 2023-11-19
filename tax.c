#include<stdio.h>
int main(){
    float tax,income;
    printf("enter your income\n");
    scanf("%f",&income);
    if(income>500000 && income<1000000){
        tax=tax+0.05*(income-500000);
    }
    if(income>1500000 && income<2500000){
        tax=tax+0.10*(income-1500000);
    }
     if(income>3000000 && income<4000000){
        tax=tax+0.15*(income-3000000);
    }
     if(income>5000000 && income<6000000){
        tax=tax+0.20*(income-5000000);
    }
     if(income>7000000 && income<8000000){
        tax=tax+0.30*(income-7000000);
    }
    printf("%f\n",tax);
}