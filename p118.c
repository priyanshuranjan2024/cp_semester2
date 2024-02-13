#include<stdio.h>

int fib(int n){

    if(n==1) return 0;
    if(n==2) return 1;

    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;){
        for(int j=0;j<2;j++){
            printf("%d, ",fib(i));
            i++;
        }
        printf("   ");
    }
    printf("\n");


    return 0;
}