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

int x=10;

void test(){
    auto int a=10;
    intPrint(a);
    a++;
}

void test1(){
    static int a=10;
    intPrint(a);
    a++;
}

void rec(){
    static int x=3; //if not static(e.g. only int) then function(rec) will go stackOverflow(abnormal termination with stackOverflow)
    intPrint(x--);
    space
    if(x)
    rec();
}

int f(int n){
    static int i=1;
    if(n>=5)
     return n;
    n+=i;
    i++;
    return f(n);
}

int fun(int n){
    static int r;
    if(n<=0) return 1;
    if(n>3){
        r=n;
        return fun(n-2)+2;
    }
    return fun(n-1)+r;
}

int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);
    int y=20;
    // int x=2;
 {
    int x=30;
    intPrint(x); //#1
 }
    nxtLine;
    
    
    printf("%d %d",x,y); //#2
    nxtLine
    
    
    test(); //#3
    space
    test();
    space
    test(); //#3
    nxtLine 


    test1(); //#4
    space
    test1();
    space
    test1(); //#4
    nxtLine



    rec();   //#5
    nxtLine
    
    
    intPrint(f(1)); //#6
    nxtLine


    intPrint(fun(5)); //#7

// OUTPUT
//#1 30        
//#2 10 20
//#3 10 10 10
//#4 10 11 12
//#5 3 2 1 
//#6 7
//#7  18

}