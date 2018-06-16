
#include <stdio.h>

main()
{
   int lower, upper, step, fahr;

   lower = 0;
   upper = 300;
   step = 20;

   for (fahr = upper; fahr >= lower; fahr = fahr - step)
      printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}


