// QUE-4 Write a C program that uses pointers to swap the values of two integers. Implement a function for the swapping operation.

#include<stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p, *q;
    p = &a;
    q = &b;

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    *p = *q;
    *q = *p;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
