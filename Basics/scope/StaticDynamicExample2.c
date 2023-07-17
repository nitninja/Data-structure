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
int a,b;
int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int a=3;
    printf("%d %d\n",a,b);
    C();
    printf("%d %d\n",a,b);
    D();

    // OUTPUT Is static scoping 
    // 3 0
    // 0 0
    // 4 5
    // 6 4
    // 7 8
    // 4 6
    // 4 5
    // 3 5
    // 6 4
    // 7 8
    // 4 6

    // Dynamic scoping ans
    // 3 0 
    // 3 0
    // 4 5
    // 6 4
    // 7 8
    // 4 6
    // 4 5
    // 4 5
    // 6 4 
    // 7 8
    // 4 6
        // 
}

void C(){
    printf("%d %d\n",a,b);
    a=4,b=5;
    printf("%d %d\n",a,b);
    D();
    printf("%d %d\n",a,b);
}

void D(){
    int b=6;
    E(a,b);
    printf("%d %d\n",a,b);
}

void E(int b,int a){
    printf("%d %d\n",a,b);
    a=b+a;
    b=a-b;
    a=7,b=8;
    printf("%d %d\n",a,b);

}