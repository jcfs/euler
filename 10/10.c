#include <stdio.h>
#include <math.h>

int main(int argc, char ** argv) {

  int i = 2;
  long long c = 0;

  while(1) {

    int j;
    int f = 1;

    for(j = 2; j <= sqrt(i); j++) 
      if (!(i%j)) {
        f = 0;
        break;
      }

    if (f){
     c+=i;
     printf("%d %lld\n", i, c);
    } 


    i++;

    if (i >= 2000000) break;
  }

  printf("%lld\n", c);


}
