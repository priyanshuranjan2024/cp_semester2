#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int mat[n][n];

    int ans=0;

    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&mat[i][j]);

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            ans+=mat[i][j];
        }
    }

    printf("%d",ans);
    

    return 0;
}