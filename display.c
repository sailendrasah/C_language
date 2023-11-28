#include<stdio.h>
typedef struct complex{
    int code;
    float salary;
    char name[20];
} comp;
void display(comp c){
    printf("enter the code for %d\n",c.code);
    printf("enter the salary  for %f\n",c.salary);
    printf("enter the name  for %s\n",c.name);

}


int main(){
    comp cnums[5];
    for(int i=0;i<4;i++){
        printf("enter the code %d:",i+1);
        scanf("%d:",&cnums[i].code);
        printf("enter he salary %f:",i+1);
        scanf("%f:",&cnums[i].salary);
        printf("enter he name %s:",i+1);
        scanf("%s:",&cnums[i].name);

    }
     for(int i=0;i<5;i++){
        display(cnums[i]);
     }
}