#include<stdio.h>

int fac(int n){
    if(n==0 || n==1) return 1;

    return n*fac(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    int original_num=n;
    int sum=0;

    while(n){
        int digit=n%10;
        sum+=fac(digit);
        n/=10;
    }

    if(sum==original_num) printf("Yes\n");
    else printf("No\n");


    return 0;
}