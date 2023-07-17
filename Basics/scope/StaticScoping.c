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

int a=50,b=60;
int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int a,b;
    a=10,b=20;
    Swap();
    nxtLine
    strPrint("From Main func: ")
    intPrint(a);
    space
    intPrint(b);

}

Swap(){
    int t;
    t=a; //Static scoping
    a=b; //Static Scoping
    b=t; //Static scoping
    strPrint("From Swap func: ")
    intPrint(a);
    space
    intPrint(b)
}