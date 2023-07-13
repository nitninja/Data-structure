#include<stdio.h>
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

 int m=10;
 int n,n1;
 n=++m;
 n1=m++;
 n--;
 --n1;
 n-=n1;
 intPrint(n);

 nxtLine;

 int a=5;
//  printf("%d",(a++)++); //error
//  printf("%d",(a+1)++); //error

// OUTPUT
// 0


}