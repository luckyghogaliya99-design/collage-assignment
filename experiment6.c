#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

    // Demonstrating operator precedence
    result = a + b * c;
    printf("a + b * c = %d\n", result);

    // Demonstrating the use of parentheses
    result = (a + b) * c;
    printf("(a + b) * c = %d\n", result);

    // Demonstrating left-to-right associativity
    result = a - b - c;
    printf("a - b - c = %d\n", result);

    // Demonstrating right-to-left associativity
    result = a = b = c;
    printf("a = b = c = %d\n", result);

    return 0;
}
