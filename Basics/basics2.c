#include<stdio.h>
#define intPrint(a) printf("%d",a);
#define fltPrint(a) printf("%f",a);
#define strPrint(a) printf("%s",a);
#define intScan(a) scanf("%d",&a);
#define fltScan(a) scanf("%f",&a);
#define nxtLine printf("\n");

int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int x,y,S;

    printf("Enter two Proper Integers!!");
    nxtLine;
    S=scanf("%d%d",&x,&y);

    if(S==2){
        printf("proper Input given. ");
        intPrint(x);
        printf(" ");
        intPrint(y);
    }

    else{
        printf("Wrong Input given.");
    }



}