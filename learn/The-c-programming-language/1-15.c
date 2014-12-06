#include <stdio.h>
int main()
{
    float transform(float fahr);
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%s %s","fahr","celsius\n");
    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, transform(fahr));
        fahr = fahr + step;
    }
    return 0;
}

float transform(float fahr)
{
    return (5.0/9.0) * (fahr-32.0);
}
