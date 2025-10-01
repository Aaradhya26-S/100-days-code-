//write a program to swap two numbers without using a third variable
#include <stdio.h>
int main() {
int num1, num2;
    printf("enter the first number: ");
    scanf("%d", &num1);
    printf("enter the second number: ");
    scanf("%d", &num2);
    num1 = num1 + num2; // sum of two numbers is sorted in num1
    num2= num1-num2; //num2 is sorted in num1-num2
    num1 =  num1-num2; //num1 is sorted in num1-num2
    printf("enter the first number after swqpping is %d\n", num1);
    printf("enter the second number after swapping is %d\n", num2);
    return 0;

}
    