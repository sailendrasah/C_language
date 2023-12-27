#include<stdio.h>
int main(){
    int kilometer;
    printf("enter the kilometer:");
    scanf("%d",&kilometer);
    int meter=kilometer*1000;
    printf("%d\n",meter);
    float feet;
feet =3280.84*kilometer;
    printf("%.1f\n",feet);
float inch;
inch =kilometer*39370.079;
    printf("%.1f\n",inch);

}