#include<stdio.h>
int main(){
    int x=1;
    int num;
    int fac=1;
    printf("enter the value");
    scanf("%d",&num);
    while(x<=num){
        fac=fac*x;
        x++;
    }
        printf("%d is %d",fac,num);
        
        
    
}