#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next;
    
    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);
    
    printf("Fibonacci series up to %d terms:\n", limit);
    printf("%d, %d, ", first, second); // Print the first two terms
    
    next = first + second;
    
    while(next <= limit) {
        printf("%d, ", next);
        first = second;
        second = next;
        next = first + second;
    }
    
    printf("\n");
    
    return 0;
}
