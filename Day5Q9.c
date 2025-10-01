// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time;
    float simple_interest=0 , compound_interest=0;
    
    if (principal!=0 && rate!=0 && time!=0){
        printf("enter principal amount: ");
    scanf("%f", &principal);
    printf("enter rate of intrest: ");
    scanf("%f", &rate);
    printf("enter time in years: ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time)/100; 
    compound_interest = principal * pow((1 + rate / 100), time) - principal;
    printf("compound interest is %f\n", compound_interest);
    printf("simple interest is %f\n", simple_interest);
    }
    else {
        printf("error");
    }
    
    return 0;

}