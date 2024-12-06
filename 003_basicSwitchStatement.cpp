#include <stdio.h>   

//basic switch statement with a weird compound (x) ?  a : b thing.
int main(void) 
{
    float speed;
    printf("Enter speed: ");
    //use %f for float and %lf for double.
    scanf_s("%f", &speed);  
    //if speed <=65, then speed is changed to 65 , else, <=70?, else 90
    speed = speed <= 65 ? 65 : speed <= 70 ? 70 : 90;   
    int speedInt = (int)speed;

        switch (speedInt)
        {
        case 65: printf("That seems pretty chill"); break;
        case 70: printf("That's more than 65"); break;
        case 90: printf("That's a bit too fast"); break;

        }
    return 0;
 }  
