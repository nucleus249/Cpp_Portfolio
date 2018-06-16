#include <stdio.h>

main()
{
   /* print Celsius to Fahrenheit table with a heading
    * for cel = 0,20,...,300; */

   float fahr, cel;
   int lower, upper, step;


   lower = 0;
   upper = 300;
   step = 20;
   cel = lower;

  
   printf("   HEADING\n");

   while (cel <= upper)
   {
      fahr = 1.8 * cel + 32;
      printf("%3.0f %6.1f\n", cel, fahr);
      cel = cel + step;
   }
}

