#include<stdio.h>

int main(){
    float sum=0;

    for(int i=0;i<10;i++){
        float num;
        scanf("%f",&num);
        sum+=num;
    }

    printf("The Sum is %f\n",sum);
    float avg=sum/10;

    printf("The average is %f\n",avg);
    
    return 0;
}