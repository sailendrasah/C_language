#include<stdio.h>
int main(){
    int n,ne=0,p=0,z=0;
    // printf("enter the value");
    // scanf("%d",&n);
    while(n){
    printf("enter the value");
    scanf("%d",&n);
if(n>0){
p++;
}
else if(n<0){
ne++;
}
else if(n==0){
z++;
}
// n-1;
    
    printf("positive number is %d\n",p); 
    printf("negative number is %d\n",ne); 
    printf("zero number is %d\n",z); 

    
    }
}