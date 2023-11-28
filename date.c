#include<stdio.h>
/*
typedef struct date{
    int date;
    int month;
    int year;
}date;
void display(date d){
    printf("the date is: %d/%d%d\n",d.date,d.month,d.year);
}
int datecom(date d1,date d2){
    if(d1.date<d2.date){
        return 1;
    }
    
    else{
        return -1;
    }
}
int main(){
     date d1={2,3,2003};
     date d2={5,5,2005};
display(d1);
display(d2);
int a=datecom(d1,d2);
printf("%d",a);
}
*/
typedef struct time{
    int date;
    int month;
    int year;
    int hrs;
    int min;

}time;
void display(time t){
    printf("%d/%d/%d /%d/%d",t.date,t.month,t.year,t.hrs,t.min);
}
int main(){
    time t={10,8,2080,3,54};
    display(t);
}