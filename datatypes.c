
#include <stdio.h>

int main()
{
    int a = 10;
    char c = 'A';
    float f = 1.2;
    double d = 4.8;
    unsigned char ch1 = -1;
    printf("i = %d\t size = %ld\n", a, sizeof(a));
    printf("ch = %c\t size = %ld\n", c, sizeof(c));
    printf("f = %f\t size = %ld\n", f, sizeof(f));
    printf("d = %lf\t size = %ld\n", d, sizeof(d));
    printf("ch1 = %hhu\t size = %ld\n", ch1, sizeof(ch1));

    return 0;
}
