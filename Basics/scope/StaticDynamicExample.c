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

int a=1,b=2;
int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int a=20,b=30;
    strPrint("Printf in Main func: ")
    intPrint(a);
    space
    intPrint(b);
    nxtLine
    C();
    strPrint("Printf in Main func: ")
    intPrint(a)
    space
    intPrint(b);
    nxtLine
    D();


    // OUTPUT
    // Printf in Main func: 20 30
    // Printf in func C: 50 2
    // Printf in func D: 1 2
    // Printf in func D: 3 4
    // Printf in func E: 3 6
    // Printf in func C: 50 4
    // Printf in Main func: 20 30
    // Printf in func D: 7 4
    // Printf in func D: 3 4
    // Printf in func E: 3 6
     
}

void C(){
    int a=50;
    strPrint("Printf in func C: ")
    printf("%d %d\n",a,b);
    D();
    strPrint("Printf in func C: ")
    printf("%d %d\n",a,b);

}

void D(){
    strPrint("Printf in func D: ")
    printf("%d %d\n",a,b);
    a=3,b=4;
    strPrint("Printf in func D: ")
    printf("%d %d\n",a,b);
    E();
}

void E(){
    int b=6;
    strPrint("Printf in func E: ")
    printf("%d %d\n",a,b);
    a=7,b=8;
}