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

    int x;
    intScan(x);
    switch(x){
        case 0: x+=1;
        case 1: x+=2;
        default: x+=3;
    }
    intPrint(x);
    nxtLine;
    int y;
    intScan(y);

    switch(y){
        case 0: y+=1;
                break;
        default: y-=1;
        case 1: y+=10;
                break;
        case 2: y+=100;
    }
    intPrint(y);
    nxtLine;

    int i;
    forIncr(1,25){
        switch(i){
            case 0: i+=5;
            case 1: i+=3;
            case 2: i+=4;
            default:i+=5;
                    break;
        }
        intPrint(i);
        space;
    }

// OUTPUT
// 6
// 102
// 13	19	25	

    



}