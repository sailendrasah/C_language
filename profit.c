#include<stdio.h>
int main(){
    int cp;
    int sp;
    printf("enter the c.p:");
    scanf("%d",&cp);
    printf("enter the s.p:");
    scanf("%d",&sp);
if(cp>sp){
    printf("profit");
}
else{
    printf("loss");
}
int profit=cp-sp;
printf("%d\n",profit);
}