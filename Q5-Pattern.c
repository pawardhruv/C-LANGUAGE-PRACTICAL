 // QUE-5  Implement a C program to print the following pattern using nested for loop:
#include<stdio.h>
int main()
{
   
    int i, j, k;
    for(i=5 ; i>=1 ; i--)
    {
        for(k=1; k<=i; k++)
        {
            printf("  ");
        }
        for(j=i ; j<=5 ; j++)
        {
            printf(" *");
        }
        
        printf("\n");
        
    }
    return 0;
}
