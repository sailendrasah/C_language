#include<stdio.h>
/*
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
}*/
int main(){
    int num,reverse,remainder;
    printf("enter the num");
    scanf("%d",&num);
if(num!=0){
num=num%10;
num=(num/100)%10;

reverse=num*0+num;
printf("%d",reverse);

}

}
