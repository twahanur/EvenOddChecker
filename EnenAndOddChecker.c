#include<stdio.h>
int main()
{
    int number;
    
    printf("Input Number: ");
    scanf("%d", & number);
    if (number % 2 == 0)
    {
        printf("The Number Is even");
    }
    else{
        printf("The Number is Odd");
    }
    
    return 0;
}
