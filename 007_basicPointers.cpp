#include <stdio.h>

int main(void) {
    int a = 9;
    int *p = &a;

    //prints address in memory of a
    printf("Address of 'a' is: %p\n", (void*)p);  
    
    // prints value of a
    printf("Value of a: %d\n", *p);

    //prints address of a without using a pointer variable
    printf("Address of 'a': %p\n", (void*)&a);
    return 0;
}
