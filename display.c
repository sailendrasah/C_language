#include<stdio.h>
typedef struct complex{
    int real;
    int complex;
} comp;
void display(comp c){
    printf("enter the real valuue for %d\n",c.real);
    printf("enter the complex valuue for %d\n",c.complex);
}


int main(){
    comp cnums[5];
    for(int i=0;i<5;i++){
        printf("%d:",i+1);
        scanf("%d:",&cnums[i].real);
        printf("%d:",i+1);
        scanf("%d:",&cnums[i].complex);
    }
     for(int i=0;i<5;i++){
        display(cnums[i]);
     }
}