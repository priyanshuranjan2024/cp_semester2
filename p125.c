#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n;i++) printf("%d, ",arr[i]);
    
    int element;
    scanf("%d",&element);
    int location;
    scanf("%d",&location);

    for(int i=n;i>=location;i--) arr[i]=arr[i-1];

    arr[location-1]=element;
    for(int i=0;i<n+1;i++) printf("%d, ",arr[i]);



    

    return 0;
}