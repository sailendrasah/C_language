#include<stdio.h>
 #include<stdlib.h>
typedef struct{
    int id;
    float salary;
    char name[20];
} employe;
int main(){
    int n=2;
    employe employe[n];
    printf("enter %d employe detail \n \n",n);
    for(int i=0;i<n;i++){
    printf("enter the employe detail\n",i+1);
    printf("id:");
    scanf("%d",&employe[i].id);
    printf( "salary:");
    scanf("%f",&employe[i].salary);
    printf("name:");
    scanf("%s",employe[i].name);
    printf("\n");
}

printf("************************************all employee detail****************************\n");
 for(int i=0;i<n;i++){
    printf("enter the employe detail",i+1);
    printf("id :");
    printf("%d\n",employe[i].id);
    printf("salary :");
    printf("%f\n",employe[i].salary);
    printf("name :");
    printf("%s\n",employe[i].name);
    printf("\n");

 }
    printf("**********************************company name********************************\n");

}


