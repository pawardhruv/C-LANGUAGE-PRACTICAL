// QUE-4 Write a C program that uses pointers to swap the values of two integers. Implement a function for the swapping operation.
#include<stdio.h>
 int main()
 {
    int a,b;
    

    printf("Pointer value of a:");
    scanf("%d", &a);

    printf("Pointer value of b:");
    scanf("%d", &b);

    int *ptr1 = &a;
    int *ptr2 = &b; 

    printf("before swapping pointer value : %d\n", a);
    printf("before swapping pointer value : %d\n", b);

    *ptr1 = *ptr1+ *ptr2;
    *ptr2 = *ptr1- *ptr2;
    *ptr1 = *ptr1- *ptr2;
    
    printf("after swapping pointer value is  : %d\n", *ptr1);
    printf("after swapping pointer value is : %d\n", *ptr2);
   

    return 0;
 }

