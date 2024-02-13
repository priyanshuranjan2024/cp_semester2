#include <stdio.h>

int main() {
    
    int number, original_number, first_digit, last_digit, swapped_number = 0;
    scanf("%d", &number);
    
    original_number = number;
    
    // Extracting the last digit
    last_digit = number % 10;
    
    // Counting the number of digits
    while(number >= 10) {
        number /= 10;
    }
    first_digit = number;
    
    // Swapping the first and last digits
    swapped_number = last_digit;
    int temp = original_number % 10;
    int temp1 = original_number / 10;
    int temp2 = temp1 / 10;
    swapped_number = swapped_number * 10 + temp1;
    swapped_number = swapped_number * 10 + temp2;
    swapped_number = swapped_number * 10 + temp;
    
    printf(" %d\n", swapped_number);
    
    return 0;
}
