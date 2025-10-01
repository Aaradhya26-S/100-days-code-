// Write a program to input a year and check whether it is a leap year or not using conditional statement
#include <Stdio.h>
int main() {
int year;
//input year
printf("enter year: ");
scanf("%d", &year);
// leap year check
if (year % 400 ==0) {
    printf("%d is leap year\n", year);
    } else if (year % 100 == 0) {
        printf("%d is not leap year\n", year);
    } else if (year % 4 == 0) {
        printf("%d is leap year\n", year);
    } else {
        printf("%d is not leap year\n", year);
    }
}