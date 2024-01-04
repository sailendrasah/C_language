#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("enter the age of ram");
    scanf("%d\n",&ram);
    printf("enter the age of shyam");
    scanf("%d\n",&shyam);
    printf("enter the age of ajay");
    scanf("%d\n",&ajay);
    if(ram<shyam){
        if(ram<ajay)
        printf("ram is yongest");
    }
    if(shyam<ram){
        if(shyam<ajay)
        printf("shyam is yongest");
    }
    if(ajay<ram){
        if(ajay<shyam)
        printf("ajay is yongest");
    }
}