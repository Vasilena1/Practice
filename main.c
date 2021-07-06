#include <stdio.h>

int main()
{
    float a, b, x;
    printf(" a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    if(a == 0 && b == 0)
    {
        printf("x: 0");
    }
    else if(a != 0)
    {
        x = -b / a;
        printf("x: %.2f", x);
    }
    else if(a == 0 && b != 0)
    {
        printf("No solution!");
    }
    return 0;
}

//---TEST1---//
/*  a:5
    b:10
    x: -2.00

//---TEST2---//
    a:0
    b:19
    No solution!
//---TEST3---//
    a:0
    b:0
    x: 0    */