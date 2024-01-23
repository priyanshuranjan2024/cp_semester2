#include<stdio.h>

int main(){
    int num;
    int sum=0;
    scanf("%d",&num);
    while(num){
        sum+=num%10;
        num/=10;
        
    }

    printf("The sum is %d",sum);

    return 0;
}