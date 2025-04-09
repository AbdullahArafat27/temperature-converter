#include<stdio.h>

int main(void)
{
    int fahr, cels;
    int upper, lower, step;

    upper = 500;
    lower = 0;
    step = 10;

    fahr = lower;
    printf("Fahrenheit\t""Celsius\n");
    while (fahr <= upper){
        cels = 5 * (fahr - 32) / 9;
        printf("%d\t%10d\n", fahr, cels);
        fahr = fahr + step;
    }
    return 0;
}