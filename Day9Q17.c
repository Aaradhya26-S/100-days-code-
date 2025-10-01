#include <stdio.h>
#include <math.h>
// Write a program to find the roots of a quadratic equation and categorize them.
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2lf, Root2 = %.2lf\n", root1, root2);
    }
    else if (discriminant == 0) {
        // Two equal real roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2lf\n", root1);
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary.\n");
        printf("Root1 = %.2lf + %.2lfi, Root2 = %.2lf - %.2lfi\n", 
               realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
