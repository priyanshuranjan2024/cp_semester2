#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int temp=0;
    temp=100*(num%10);
    num/=10;
    temp+=10*(num%10);
    num/=10;
    temp+=(num%10);

    
    printf("Reversed string is %d",temp);

    return 0;

}