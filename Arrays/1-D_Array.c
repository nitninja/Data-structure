#include<stdio.h>
#define intPrint(b,a) printf("%s %d",b,a);
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


    int a[5]={10,20,30,40,50};
    intPrint("1:  ",&a); //ba of array a
    nxtLine
    intPrint("2:  ",*&a) //ba of 0th element of array a
    nxtLine
    intPrint("3:  ",*&a+1)//ba address of 1st element of array a
    nxtLine
    intPrint("4:  ",*a)//value of 0th element of array a
    nxtLine
    // intPrint(**a) error
    intPrint("5:  ",*a+1)//value of 1st element of array a
    nxtLine
    intPrint("6:  ",a+1)//ba of 1st element of array a *(printf(a) is the address of array)
    nxtLine
    intPrint("7:  ",&a+1)//ba of next continuous array or generally address  
    nxtLine
    intPrint("8:  ",*(a+2))//value of 2nd element of array a
    nxtLine
    intPrint("9:  ",*(*(&a)+2))//value of 2nd elemnet of array a
    nxtLine
    intPrint("10: ",*(&a+1)-a)//subtraction of ba 0th element of next array to ba of array a
    nxtLine
    intPrint("11: ",*(&a+1))//ba of 0th element of next array

// OUTPUT
// 1:   1001521216
// 2:   1001521216
// 3:   1001521220
// 4:   10
// 5:   11
// 6:   1001521220
// 7:   1001521236
// 8:   30
// 9:   30
// 10:  5
// 11:  1001521236

}