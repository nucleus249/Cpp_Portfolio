
#include <stdio.h>
#define IN  1  // insi
#define OUT 0

// This program prints the given input one word per line


main(){
   
   int c, nl, nw, nc, state;

   state = OUT;
   nl = nw = nc = 0;
   while ((c = getchar()) != EOF){

        putchar(c);

      if (c == ' ' || c == '\n' || c == '\t'){
         printf("\n");
         state = OUT;
      }
      else if (state = OUT){
        state = IN;
      }
   }
        
}

