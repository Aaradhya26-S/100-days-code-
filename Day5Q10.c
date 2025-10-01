// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
#include <math.h>
int main() {
    int total_seconds, hours, minutes, seconds;
    printf("enter time in seconds: ");
    scanf("%d", &total_seconds);
    //conversion
    hours = total_seconds / 3600;
    // 1 hour = 3600 seconds 
    minutes = (total_seconds % 3600 /60);
    //remaining seconds after extracting hours is converted to minutes
    seconds = (total_seconds % 3600) % 60;
    // remaining seconds after extracting hours and minutes is seconds
    printf("time = %02d: %02d: %02d\n", hours, minutes, seconds);
    return 0;
}