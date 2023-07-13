#include<stdio.h>
#include<stdbool.h>

#define intPrint(a) printf("%d",a);
#define fltPrint(a) printf("%f",a);
#define strPrint(a) printf("%s",a);
#define intScan(a) scanf("%d",&a);
#define fltScan(a) scanf("%f",&a);
#define nxtLine printf("\n");
#define space printf("\t");

int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);


 int a=6>7?2>3?10:6>8?-2:3:0?-1:6>8?10:3>4?10:20;
 intPrint(a);
 nxtLine;

//  OUTPUT
//  20

}