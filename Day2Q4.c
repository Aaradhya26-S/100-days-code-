#include <stdio.h>
int main() {
    int area, circumference, radius;
    printf("enter radius of circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius *radius;
    printf("area of circle is %d\n", area);
    circumference = 2 * 3.14 * radius;
    printf("circumference of circle i %d\n", circumference);
    return 0;

}