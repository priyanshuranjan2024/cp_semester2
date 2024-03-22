#include<stdio.h>

void even(int n){
    if(n>=1){
        if(n%2==0) printf("%d ",n);
        even(n-1);
    }
}

void odd(int n){
    if(n>=1){
        if(n%2!=0) printf("%d ",n);
        odd(n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    even(n);
    printf("\n");
    odd(n);
    printf("\n");


    return 0;
}