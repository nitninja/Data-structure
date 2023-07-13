#include<stdio.h>
#define intPrint(a) printf("%d",a);
#define fltPrint(a) printf("%f",a);
#define strPrint(a) printf("%s",a);
#define intScan(a) scanf("%d",&a);
#define fltScan(a) scanf("%f",&a);
#define nxtLine printf("\n");
#define space printf("\t");
#define forIncr(a,b) for(int i=a;i<=b;i++)
#define forDecr(a,b) for(int i=a;i<=b;i++)

int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);


    int i,a=212;
    for(i=0;i<=2;i++){
        intPrint(a>>i);
        space;
    }
    nxtLine;
    forIncr(0,2){
        intPrint(a<<i);
        space;
    }

// OUTPUT
// 212	106	53	
// 212	424	848	

}