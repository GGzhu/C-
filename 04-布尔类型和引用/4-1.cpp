#include<stdio.h>

int main()
{
    int a = 4;
    int c = 5;

    int& b = a;
    b = c;

    b = 5;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);

    return 0;
}
