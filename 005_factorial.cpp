#include <stdio.h>

//works up to 16
 int main(void)
{
     int var = 0;
     int f = 1;
     printf("Chose number to make factorial: ");
     scanf_s("%d", &var);

     //start f at 1 not zero, and multiply by +1 until var is reached.
     for (int i = 1; i <= var; i++)
        f = f * i;

    printf("Factorial of %d is %ld\n", var, f);  

    return 0;  
}
