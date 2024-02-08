#include<stdio.h>

int main(){
    int num;
    int sum=0;
    scanf("%d",&num);

    while(num){
        int res=num%10;
        sum+=res;
        num/=10;
    }
    
    printf("The sum is %d",sum);
    


    return 0;
}