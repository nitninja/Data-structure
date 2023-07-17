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


int a=5,b=6;

int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    auto int a=1;
    printf("%d %d\n",a,b);
    C();
    a=2,b=3;
    E();
    printf("%d %d\n",a,b);

    // OUTPUT
    // 1 6
    // 5 6
    // 5 27
    // 25 0
    // 44 69
    // 2 3
    
}

void C(){
    register int a =25;
    static int b;
    D();
    printf("%d %d\n",a,b);
    a=4,b=5;
}

void D(){
    extern int a;
    printf("%d %d\n",a,b);
    E();
    a=44;
    b=55;
}

void E(){
    static int b =27;
    printf("%d %d\n",a,b);
    a=59,b=69;
}