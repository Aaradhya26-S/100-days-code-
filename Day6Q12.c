// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main() {
    int num;
    printf("enter an integer: ");
    scanf("%d", &num);
    if(num>=0) {
        if (num == 0 ) {
            printf("%d iS zero\n", num);
        } else {
            printf("%d is positive\n", num);
        }
    }else{
        printf("%d is negative\n", num);
    }
    return 0;

    }

