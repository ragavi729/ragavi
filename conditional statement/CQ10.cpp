#include <stdio.h>
int main() {
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    if (sum % 2 == 0) {
        printf("The sum %d is even.\n", sum);
    } else {
        printf("The sum %d is odd.\n", sum);
    }

    return 0;
}
