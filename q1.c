#include<stdio.h>

void printNumber(int n){
    if(n<=50){
        printf("%d ",n);
        printNumber(n+1);
    }
}




int main(){

    printNumber(1);
    


    return 0;
}