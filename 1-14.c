
#include <stdio.h>

/* This program takes in characters from the standard input and provides a
 * histogram of the frequencies of the different characters.
 * This program will exclude non alphanumeric characters. */

int main()
{
   int c, i, j;
   int nc[36];  /*array that stores the frequencies of the characters*/

   while ((c = getchar()) != EOF){
      for(i=0; i<36; i++){
         if (c == '0' + i)
            ++nc[i];
      }
   }

   for (i=0; i<36; i++){
      putchar('0'+i);
      printf(": ");
      for (j=0; j<nc[i]; j++)
         printf("-");
      printf("\n");
   }
   return 0;
}




