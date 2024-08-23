#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Asking for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculating the sum
    sum = num1 + num2;

    // Displaying the sum
    printf("Sum: %d\n", sum);

    return 0;
}
