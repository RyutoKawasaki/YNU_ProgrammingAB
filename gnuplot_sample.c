#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   FILE *gp;

   gp=popen("gnuplot -persist","w");

   fprintf(gp,"plot sin(x) + 1 -2\n");

   pclose(gp);
   return 0;
}
