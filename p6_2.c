#include<stdio.h>

int main(){
    char a;
    scanf("%s",&a);
    if(a>='a' && a<='z' ||a>='A' && a<='Z'){
        if(a=='a' || a=='e' ||a=='i' ||a=='o' ||a=='u'||a=='A'||a=='E'||a=='I' || a=='O'||a=='U') printf("Vowel\n");
        else printf("Consonant\n");
    }
    else printf("the entered character is not an alphabet\n");


    return 0;
}
