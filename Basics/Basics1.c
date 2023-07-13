#include<stdio.h>
#define intPrint(a) printf("%d",a);
#define fltPrint(a) printf("%f",a);
#define strPrint(a) printf("%s",a);
#define nxtLine printf("\n");
int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

 int a=5,b=2;
 float c=5.0,d=2.0;

    printf("");
    intPrint(a);
    nxtLine;
    fltPrint(d);
    nxtLine;

    if(a=8){
        printf("hello ");
    }
    else printf("bye ");

    intPrint(a);
    nxtLine;

    int x;
    x=printf("Helios ");
    intPrint(x);

    nxtLine;

    int k;
    
    k=printf("life made %d easy ",printf("Mine "));
    intPrint(k);


}