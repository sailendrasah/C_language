#include<stdio.h>
int main(){
    int a,b,range=0;
    printf("enter the value");
    scanf("%d",&a);
    printf("enter the value");
    scanf("%d",&b);
while(a>=b){
      a-=b;
      range++;

}

// printf("%d",&range);

printf("%d\n",range);



}