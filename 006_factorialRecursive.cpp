#include <stdio.h>

// recursive function does factorial from greatest to least,
// instead of least to greatest.
long factorial_recursive(int n) {
    if (n <= 1)  
        return 1;
    else
        return n * factorial_recursive(n - 1);  
}

int main(void) {
    int n;
  
    printf("Enter a number to calculate its factorial: ");
    scanf_s("%d", &n);

    if (n < 0) 
    printf("Error, negative number.\n");
    else
    printf("Factorial of %d is %ld\n", n, factorial_recursive(n));

    return 0;
}
