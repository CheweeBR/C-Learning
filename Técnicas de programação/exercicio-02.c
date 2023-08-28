#include <stdio.h>
int main(void)
{
    int x = 42;
    int y = x;
    int *pt = &x;
    printf("x = %d\n", x);
    printf("&x = %d\n", &x);
    printf("y = %d\n", y);
    printf("&y = %d\n", &y);
    printf("pt = %d\n", pt);
    printf("&pt = %d\n", &pt);
    printf("*pt = %d\n", *pt);
    return 0;
}
