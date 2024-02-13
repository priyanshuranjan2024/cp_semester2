#include <stdio.h>

int main() {
    int number, digit, temp;
    int frequency[10] = {0}; // Array to store frequency of each digit (0 to 9)
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    temp = number;
    
    // Calculate frequency of each digit
    while(temp != 0) {
        digit = temp % 10; // Extract the last digit
        frequency[digit]++; // Increment the count for that digit
        temp /= 10; // Move to the next digit
    }
    
    // Displaying the frequency of each digit
    printf("Frequency of each digit in the number %d:\n", number);
    for(int i = 0; i < 10; i++) {
        if(frequency[i] != 0) {
            printf("Frequency of digit %d: %d\n", i, frequency[i]);
        }
    }
    
    return 0;
}
