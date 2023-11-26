#include<stdio.h>
#include<string.h>
struct employe{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employe e1;
    struct employe *ptr;
    ptr=&e1;
   (*ptr).code=502;
   (*ptr).salary=120.2;
strcpy((*ptr).name,"apple");

    printf("%d\n",(*ptr).code);
    printf("%.1f\n",(*ptr).salary);
    printf("%s\n",(*ptr).name);

}