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


int f(int x){
    int y;
    y=g(x);
    return (x+y);
}

int g(int x){
    static int y =5;
    y+=7;
    return (x+y);
}

int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int i,x=5,y=10;

    forIncr(1,2){
        y+=f(x)+g(x);
        intPrint(y);
        space
    }

// OUTPUT
// 56 130

}