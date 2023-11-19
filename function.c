
#include<stdlib.h>
#include<time.h>
int main(){
int number,guess,nguess;
// printf("enter any number");
srand(time(0));
number =rand()%10 +1;
printf("%d\n",number);
do{
scanf("%d",&guess);
if(guess==number){
    printf("congratulation! you win\n");
}
else if(guess!=number){
    printf("sorry! you lose \n");
}
else{
    printf("try again",nguess);
}
nguess++;
}while(guess>number);
}