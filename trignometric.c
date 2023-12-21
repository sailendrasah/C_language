#include<stdio.h>
#include<math.h>
int main(){
    int angle;
  double  pi=3.14;
    printf("enter the angle");
    scanf("%d",&angle);
float radian=angle*(pi/180);
float sine=sin(radian);
printf("sin :%.1f\n",sine);
float cose=cos(radian);
printf("cos :%.1f\n",cose);
float tane=tan(radian);
printf("tan :%.1f\n",tane);
float cosec=1/sine;
printf("cosec :%.1f\n",cosec);

float sec=1/cose;
printf("sec :%.1f\n",sec);
float cot=1/tane;
printf("cot :%.1f\n",cot);


}
