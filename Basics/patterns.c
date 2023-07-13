#include<stdio.h>

void pyramid(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

}

void RevNumPyramid(int n){

    for(int i=n;i>=1;i--){
        for(int j=n;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }

}

void DotPyramid(int n){
    int dotPos=(2*n)-2;
    int temp=0;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            printf("%d ",j);
            temp++;
        }

        for(int j=1;j<=dotPos;j++){
            printf(". ");
            temp++;
        }
        dotPos-=2;
        // printf("%d",temp);
        for(int j=temp;j<(2*n);j++){
            printf("%d ",2*n-j);
        }
        temp=0;
        printf("\n");
    }


}

int main(){

    freopen("/home/nitish/Documents/inputOutput/input.txt","r",stdin);
    freopen("/home/nitish/Documents/inputOutput/Output.txt","w",stdout);

    int a=6;

    pyramid(a);
    printf("\n");
    RevNumPyramid(a);
    printf("\n\n");
    DotPyramid(7);

}

// OUTPUT
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 
// 
// 6 
// 6 5 
// 6 5 4 
// 6 5 4 3 
// 6 5 4 3 2 
// 6 5 4 3 2 1 
// 
// 
// 1 . . . . . . . . . . . . 1 
// 1 2 . . . . . . . . . . 2 1 
// 1 2 3 . . . . . . . . 3 2 1 
// 1 2 3 4 . . . . . . 4 3 2 1 
// 1 2 3 4 5 . . . . 5 4 3 2 1 
// 1 2 3 4 5 6 . . 6 5 4 3 2 1 
// 1 2 3 4 5 6 7 7 6 5 4 3 2 1 
// 