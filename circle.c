#include<stdio.h>
#define pi 3.14

int main()
{
        float rad;
        float area, circumference;
        printf("Enter radius value: ");
        scanf("%f", &rad);
        area = pi * rad * rad;
        circumference = 2 * pi * rad;
        printf("Area of circle: %f\n", area);
        printf("Circumference of circle: %f\n", circumference);
}
