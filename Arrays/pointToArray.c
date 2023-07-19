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


    int  a[5]={10,20,30,40,50};
    int *ptr;
    ptr=a;
    ++ptr;
    ++ptr;
    ++ptr;
    --*ptr;
    printf("%d",*ptr);
    nxtLine

    //pointer Arithmetic

    int *p=a;
    int *q=a+4;
    intPrint(a)
    nxtLine
    intPrint(p)
    nxtLine
    intPrint(q)
    nxtLine
    intPrint(q-p);

    //OUTPUT
    // 39
    // 1309879504
    // 1309879504
    // 1309879520
    // 4 //(1309879520-1309879504)/4

}