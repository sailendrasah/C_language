#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);

    printf("enter the value of c");
    scanf("%d",&c);

    int max;
    
    if(max==b||b>(a+c)){
        printf("valid triangle");
    }
    else if(max==c||c>(b+a)){
        printf("valid triangle");
    }
    else if(max==a||a>(b+c)){
        printf("valid triangle");
    }
    else{
        printf(" not valid");

    }
}