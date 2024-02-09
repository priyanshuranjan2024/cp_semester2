#include<stdio.h>

int main(){

    int n;
    int arm=0;
    scanf("%d",&n);
    int res=n;
    while (res)
    {
        int r=res%10;
        arm+=r*r*r;
        res/=10;

    }
    if(arm==n) printf("Yes it is an armstrong number\n");
    else printf("no it is not a armstrong number");
    


    return 0;
}