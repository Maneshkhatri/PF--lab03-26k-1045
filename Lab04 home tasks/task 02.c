#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            printf("Valid triangle -> Type: Equilateral");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Valid triangle -> Type: Isosceles");
        }
        else
        {
            printf("Valid triangle -> Type: Scalene");
        }
    }
    else
    {
        printf("Invalid triangle");
    }

    return 0;
}
