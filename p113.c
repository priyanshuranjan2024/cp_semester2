#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    //for loop to check
    if(n==1) printf("No\n");
    if(n==2) printf("Yes\n");

    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");




    return 0;
}