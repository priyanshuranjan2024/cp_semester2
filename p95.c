#include <stdio.h>

// Function to find the one's complement of a binary number
void onesComplement(char binary[]) {
    int i = 0;
    
    // Iterate through each bit of the binary number
    while (binary[i]) {
        // Flip each bit: 0 becomes 1, 1 becomes 0
        if (binary[i] == '0') {
            binary[i] = '1';
        } else {
            binary[i] = '0';
        }
        i++;
    }
}

int main() {
    char binary[32];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    onesComplement(binary);
    
    printf("One's complement: %s\n", binary);
    
    return 0;
}
