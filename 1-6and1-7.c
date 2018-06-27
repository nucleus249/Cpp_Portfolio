
#include <stdio.h>

// program to print the value of EOF then verify whether getchar() != EOF will
// return 0 or 1

main()
{
   int c;
   printf("%d\n", EOF);

   c = getchar(); 
   if (c == EOF)
        putchar('1');
   else
      putchar('0');
}


