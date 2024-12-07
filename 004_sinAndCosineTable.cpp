#include<stdio.h>
#include<math.h> 
//sine and cosine from 0 to 1 with .1 increments.
int main(void)
{

	for (double i = 0; i < 1; i+= 0.1)
	{ 
		printf("sin(%.1f) = %lf \t cos(%.1f) = %lf\n", i, sin(i), i,  cos(i)); 
	}
	
	printf("I am a banana.");  //banana for scale
	return 0;
}
