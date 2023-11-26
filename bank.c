#include<stdio.h>
#include<string.h>

struct person{
    int code;
    float accountno;
    char name[20]
};
int main(){
    struct person p1;
    p1.code=5;
    p1.accountno=0122012021456;
    strcpy(p1.name,"mohan");
    printf("%d\n",p1.code);
    printf("%f\n",p1.accountno);
    printf("%s\n",p1.name);
}