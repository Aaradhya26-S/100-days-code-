#include <stdio.h>
int main() {
    int celcius, fahrenheit;
    printf("enter temperature in celcius: ");
    scanf("%d", &celcius);
    fahrenheit = (celcius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %d\n", fahrenheit);
    return 0;
}