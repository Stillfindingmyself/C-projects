#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("The sum of %d and %d is %d\n", num1, num2, num1 + num2);
    printf("The difference of %d and %d is %d\n", num1, num2, num1 - num2);
    printf("The product of %d and %d is %d\n", num1, num2, num1 * num2);
    
    if (num2 != 0) {
        printf("The division of %d and %d is %.2f\n", num1, num2, (float)num1 / num2);
        printf("The remainder of %d and %d is %d\n", num1, num2, num1 % num2);
    } else {
        printf("Can't divide or modulo by zero! Dumbass. \n");
    }

    return 0;
}
