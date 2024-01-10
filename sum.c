#include<stdio.h>
int main(){
    int n,number=1,sum=0;
    printf("enter the value");
    scanf("%d",&n);
    while(number<=n){
     sum=sum+number;
    // printf("%d",sum);

     number=number+1;
    }
    printf("%d",sum);
    

}