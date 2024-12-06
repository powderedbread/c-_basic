#include <stdio.h>   



int main(void) 
{
    float speed;

    printf("Enter speed: ");
    scanf_s("%f", &speed);  //use %f for float and %lf for double.
    speed = speed <= 65 ? 65 : speed <= 70 ? 70 : 90;
    int speedInt = (int)speed;

        switch (speedInt)
        {
        case 65: printf("That seems pretty chill"); break;
        case 70: printf("That's more than 65"); break;
        case 90: printf("That's a bit too fast"); break;
        default: printf("Error"); break;

        }
    return 0;
 }  
