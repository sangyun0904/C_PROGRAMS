#include <stdio.h>

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int a, b;
    a = 1;
    b = 2;

    printf("a = %d and b = %d\n", a, b);

    swap(&a, &b);

    printf("a = %d and b = %d\n", a, b);

    return 0;
}