
#include <stdio.h>



main()
{
   int c;
   int space = 0;

   while ((c = getchar()) != EOF)
   {
      if (c != ' ')
         putchar(c);   
      else
      {
         ++space;
         if (space < 2)
            putchar(c);
      }

   }
}
