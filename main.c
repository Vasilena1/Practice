#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, x1, x2;
    printf(" a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    if(fabs(D) < 0.001)
    {
        x1 = -b / (2 * a);
        printf("x1 = x2 = %.2f\n", x1);
    }
    else if(D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("x1: %.2f\n x2: %.2f\n", x1, x2);
    }
    else
    {
        printf("No real roots!");
    }
    return 0;
}
