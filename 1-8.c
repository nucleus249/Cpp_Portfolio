
#include <stdio.h>


// This program stores the count of spaces, tabs, and newlines and prints the
// value of each at the end.

main()
{
   int space=0;
   int tab=0;
   int nl=0;
   int c;

   while ((c = getchar()) != EOF)
   {
      if (c=='\t')
         ++tab;
      else if (c==' ')
         ++space;
      else if (c=='\n')
         ++nl;
      else
         ;
   }

   printf("%d\n%d\n%d\n", space, tab, nl);
}
