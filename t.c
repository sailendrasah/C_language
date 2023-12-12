#include<stdio.h>
int main(){
  float salary,dr,hr,gr;
  printf("enter the value of salary\n");
  scanf("%f",&salary);
dr=0.2*salary;
hr=0.4*salary;
gr=salary+dr+hr;
printf("%f",gr);
}