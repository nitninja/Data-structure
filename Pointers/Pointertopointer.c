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

    int a=10;
    int *ptr;
    // int *pptr,*ppptr;
    int **pptr;
    // int **ppptr;
    int ***ppptr;
    ptr=&a;
    pptr=&ptr;
    ppptr=&pptr;

    printf("1:  %d",&a);
    nxtLine
    printf("2:  %d ",ptr);//pointer to a or address of a 
    nxtLine
    printf("3:  %d",*&a);//value at Address of a
    nxtLine
    printf("4:  %d",&ptr);//Address of ptr
    nxtLine
    printf("5:  %d",pptr);//address of ptr
    nxtLine
    printf("6:  %d",*ptr);//value At Address of a
    // printf("%d",**ptr); //error //value at address 10(a=10) 
    nxtLine
    printf("7:  %d",*pptr);//value at Address ptr(value of ptr is address of a)
    nxtLine
    printf("8:  %d",**pptr);//value of a (address of a is in ptr and (*pptr)=address of a
    nxtLine
    printf("9:  %d",&pptr);//address of pptr
    nxtLine
    printf("10: %d",ppptr);//address of pptr
    nxtLine
    printf("11: %d",*ppptr);//address of ptr
    nxtLine
    printf("12: %d",**ppptr);//address of a
    nxtLine
    printf("13: %d",***ppptr);//value of a
    nxtLine
    printf("14: %d",****&ppptr);//value of a
    nxtLine
    // printf("15: %d",****ppptr);//error
    
//OUTPUT
// 1:  1580081068
// 2:  1580081068 
// 3:  10
// 4:  1580081072
// 5:  1580081072
// 6:  10
// 7:  1580081068
// 8:  10
// 9:  1580081080
// 10: 1580081080
// 11: 1580081072
// 12: 1580081068
// 13: 10
// 14: 10










}