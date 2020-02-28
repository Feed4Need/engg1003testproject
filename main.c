#include <stdio.h>
#include <stdlib.h>

main()
{
   float x, y;
   printf("Enter a number: ");
   scanf("%f", &x);
   y=x/(1-x);
   printf("y: %f.\n", y); //Pritns the enetered digit.
    return 0;
}
