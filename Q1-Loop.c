//Que-1 Write a C program that prompts the user to enter an integer. Using a loop, calculate and display the factorial of that number.


#include<stdio.h>

int main()
{
    int num,i,fact=1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num) 
        {
            for (i = 1; i <= num; i++)
                fact = fact * i;
        }
            
    printf("Factorial of %d = %d", num, fact);
    return 0;
}

    