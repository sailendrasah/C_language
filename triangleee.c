#include<stdio.h>
#include<math.h>
int main (){
    int x;
    float s1,s2,s3,semi,aera;

printf("enter the value");
scanf("%d",&x);
    // float s1,s2,s3,semi,aera;
    printf("enter three side of triangle");
    scanf("%f %f %f",&s1,&s2,&s3);
    semi=(s1+s2+s3)/3;
    aera=sqrt(x*(x-s1)*(x-s2)*(x-s3));
    printf("area of triangke=%d",aera);
}