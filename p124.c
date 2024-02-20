#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int max=-9999999;


    //printing the numbers
    for(int i=0;i<n;i++) if(arr[i]>max) max=arr[i];

    printf("%d is the maximum number in the array.",max);

    return 0;
}