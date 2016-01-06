#include <stdio.h>
#include <math.h>

int main(int argc, char ** argv) {

  int sums, sqsum;
  int i = 0;

  for(i = 1; i <= 100; i++) 
    sums += pow(i, 2);

  for(i = 1; i <= 100; i++)
    sqsum += i;

  sqsum = pow(sqsum, 2);

  printf("%d\n", sqsum - sums);

}
