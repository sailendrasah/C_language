#include<stdio.h>
int main(){
    int year;
    printf("enter the value:");
    scanf("%d",&year);
    if(year%4==0){
        printf("the year is leap year");
    }
    else{
        printf("not leap year");
    }
}