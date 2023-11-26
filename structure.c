#include<stdio.h>
struct vector{
    int X;
    int y;
};
int main(){
    struct vector v1,v2;
    v1.X=65;
    v1.y=55;
    printf("%d and %d",v1.X,v1.y);
    v2.X=65;
    v2.y=55;
     printf("%d and %d",v2.X,v2.y);
}