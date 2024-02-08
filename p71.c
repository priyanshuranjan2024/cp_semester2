#include<stdio.h>

int main(){
    //firstly take the total marks scored by student
    int total;
    scanf("%d",&total);
    
    if(total>=90 && total<=100) printf("O");
    else if(total>=80 && total<=89) printf("E");
    else if(total>=70 && total<=79) printf("A");
    else if(total>=60 && total<=69) printf("B");
    else if(total>=50 && total<=59) printf("C");
    else if(total>=40 && total<=40) printf("D");
    else printf("F");

    return 0;
//     90 to 100 O 
// 80 to 89 E 
// 70 to 79 A 
// 60 to 69 B 
// 50 to 59 C 
// 40 to 49 D 
// < 40 F


}