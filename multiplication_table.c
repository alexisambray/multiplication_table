// Multiplication Table
// Create a program that asks for a number then create a multiplication table until that input number

#include <stdio.h>

int main() {
    int numberStart, numberEnd;
    
    printf("Enter starting number: ");
    scanf("%d", &numberStart);
    
    printf("Enter ending number: ");
    scanf("%d", &numberEnd);
    
    for (int i = numberStart; i <= numberEnd; i++) {
        printf("%d x %d = %d\n", i, numberEnd, i * numberEnd);
    }
    return 0;
}