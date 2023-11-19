#include<stdio.h>
int main(){
float total;

int phyisc,chemistry,math;
printf("enter the phyisc\n");
scanf("%d",&phyisc);
printf("enter the chemistry\n");
scanf("%d",&chemistry);

printf("enter the maath\n");
scanf("%d",&math);

total=(phyisc+chemistry+ math)/3;
if((total<35)|| phyisc<35 || chemistry<35 || math<35){
    printf("%f fail",total);
}
else{
    printf("%f pass",total);
}
}