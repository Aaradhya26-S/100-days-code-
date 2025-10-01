#include <stdio.h>
int main() {
    int num1, num2;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);
    int sum;
    sum = num1 + num2;
    printf("sum of two numbers is %d\n", sum);
    return 0;
}