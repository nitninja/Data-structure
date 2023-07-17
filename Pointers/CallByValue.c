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

    int x=10,y=20;
    Swap(x,y);
    strPrint("From Main function: ")
    printf("%d %d",x,y);

    // OutPUT
    // From Swap function: 20 10
    // From Main function: 10 20

}

void Swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    strPrint("From Swap function: ")
    printf("%d %d",a,b);
    nxtLine
}
