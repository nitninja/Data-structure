#include<stdio.h>
#define intPrint(a) printf("%d",a);
#define fltPrint(a) printf("%f",a);
#define strPrint(a) printf("%s",a);
#define intScan(a) scanf("%d",&a);
#define fltScan(a) scanf("%f",&a);
#define nxtLine printf("\n");
#define space printf(" ");
#define forIncr(a,b) for(int i=a;i<=b;i++)
#define forDecr(a,b) for(int i=a;i<=b;i++)

int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);


    int date;
    int month;
    int year;
    int DOB=0;
    intScan(date);
    intScan(month);
    intScan(year);
    DOB=date|DOB;
    DOB=DOB<<4;
    DOB=month|DOB;
    DOB=DOB<<7;
    DOB=(year-1900)|DOB;
    // int d=DOB>>11;
    int d=DOB&63488;
    int m=DOB&1920;
    int y=DOB&127;
    // int d=DOB&1111100000000000;
    // intPrint(DOB);
    printf("%d-%d-%d",d>>11,m>>7,y+1900);
    // nxtLine;
    // intPrint(d>>11);
    // space;
    // intPrint(m>>7);
    // space;
    // intPrint(y+1900);

// OUTPUT
// 5-4-2001



}