#include<stdio.h>

int gcd(int n1,int n2){
    if(n2==0) return n1;
    
    return gcd(n2,n1%n2);
}

int lcm(int n1,int n2){
    return (n1*n2)/gcd(n1,n2);
}

int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    printf("GCD is %d and LCM is %d\n",gcd(n1,n2),lcm(n1,n2));


    return 0;
}