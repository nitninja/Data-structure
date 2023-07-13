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

int r(){
    static int num=7;
    return num--;
}

int main(){

 freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
 freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

 forIncr(1,10){
    intPrint(i);
    space;
 }
 nxtLine;
 
 
 for(int i=1;i<=10;printf("%d ",i++));
 nxtLine;


 int i=1;
 while(i<=10){
    intPrint(i++);
    space;
 }
 nxtLine; 
 
 
 i=1;
 do{
    intPrint(i++);
    space;
 }while(i<=10);
 nxtLine;

//    1   2   3
 for(r();r();r())
    printf("%d ",r());

// #1 will run only once and return value is not will be considered 
// #2 will run atleast once if return is true then  #3 will be called,if false(0) then stop the loop
// #3 will run after only #2 is true and after the code inside for loop is executed
 nxtLine;

//OUTPUT 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4 5 6 7 8 9 10 
// 5 2 

}