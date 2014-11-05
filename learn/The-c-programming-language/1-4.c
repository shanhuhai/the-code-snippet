#include <stdio.h>
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 280;
    step = 20;

    printf("%s %s","celsius","fahr\n");
    celsius = lower;
    while (celsius <= upper) {
        //fahr = (celsius / (5.0/9.0)) + 32;
        fahr = (celsius * 9.0 ) / 5.0 + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
