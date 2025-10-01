#include <stdio.h>
int main() {
    int area, perimeter, length, breadth;
    printf("enter length of rectangle: ");
    scanf("%d", &length);
    printf("enter breadth of rectaangle: ");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("area of rectangle id %d\n", area);
    perimeter = 2 * (length + breadth);
    printf("perimeter of reactangle is %d\n", perimeter);
    return 0;


}