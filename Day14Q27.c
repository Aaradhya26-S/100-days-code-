// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int n, sum = 0, i, odd = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }
    printf("Sum of first %d odd numbers is %d\n", n, sum);
    return 0;
}
