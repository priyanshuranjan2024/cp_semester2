#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int res=n;
    int ans=0;
    while(res){
        int r=res%10;
        ans=ans*10+r;
        res/=10;
    }

    if(n==ans) printf("yes it is a palindrome number\n");
    else printf("no it is not a palindrome number");


    return 0;

}