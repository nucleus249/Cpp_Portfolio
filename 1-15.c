#include <stdio.h>

/*function that converts celcius to fahrenheit*/
float convert(int cel)
{
   return cel*9.0/5.0 + 32;
}

/*main function prints table of celcius to fahrenheit */
int main()
{
   int cel;

   for(cel = 0; cel <= 30; cel++)
      printf("%3d\t%3f\n", cel, convert(cel));

   return 0;
}

