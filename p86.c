#include<stdio.h>

int main(){

    int num;
    scanf("%d",&num);
    int reverse_num=0;
    while(num){
        int res=num%10;
        reverse_num=reverse_num*10+res;
        num/=10;
    }

    printf("the reverse number is %d",reverse_num);



    return 0;
}