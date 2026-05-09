#include <stdio.h>
int main() {
    int num1, num2;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    printf("the numbers are: %d and %d\n", num1, num2);
    printf("the sum is: %d\n", sum);
    return 0;
}