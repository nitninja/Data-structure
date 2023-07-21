#include<stdio.h>
#define intPrint(a,b) printf("%s %d",a,b);
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


    int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    // forIncr(0,2){
    // for(int j=0;j<=2;j++){
    // intPrint(a[i][j]);
    // space
    // }
    // space
    // }
    intPrint("1:  ",&a);//ba of 2-D array
    nxtLine
    intPrint("2:  ",a);//ba of 0th 1-D array
    nxtLine
    intPrint("3:  ",*a);//ba of 0th element of 0th 1-D array
    nxtLine
    intPrint("4:  ",**a);//value of 0th element of 0th 1-D array
    nxtLine
    // intPrint("5:  ",***a);// error
    intPrint("6:  ",&a+1);//ba of next continues 2-D array 
    nxtLine
    intPrint("7:  ",a+1);//ba of 1st 1-D array 
    nxtLine
    intPrint("8:  ",*(a+2));//ba of 0th element of 2nd 1-D array 
    nxtLine
    intPrint("9:  ",*a+1);//ba of 1st element of 0th 1-D array
    nxtLine
    intPrint("10: ",**a+1);//1 added to the value of 0th element of 0th 1-D array
    nxtLine
    intPrint("11: ",*(a+2)+1);//ba of 1st element of 2nd 1-D array
    nxtLine
    intPrint("12: ",*(a+1)+2);//bas of 2nd element of 1st 1-D array
    nxtLine
    intPrint("13: ",a[0]);//ba of 0th element of 0th 1-D array 
    nxtLine
    intPrint("14: ",*(a+0));//ba of 0th element of 0th 1-D array
    nxtLine
    intPrint("15: ",***&a);//value of 0th element of 0th 1-D array
    nxtLine
// OUTPUT
// 1:   1500834960
// 2:   1500834960
// 3:   1500834960
// 4:   10
// 5:   error
// 6:   1500834996
// 7:   1500834972
// 8:   1500834984
// 9:   1500834964
// 10:  11
// 11:  1500834988
// 12:  1500834980
// 13:  1500834960
// 14:  1500834960
// 15:  10

}