#include <stdio.h>
#include <math.h>

int main(int argc, char ** argv) {

  int i = 2;
  int c = 0;

  while(1) {

    int j;
    int f = 1;

    for(j = 2; j <= sqrt(i); j++) 
      if (!(i%j)) {
        f = 0;
        break;
      }

    if (f){
     c++;
    } 

    if (c == 10001) {
      printf("%d\n", i);
      break;
    }

    i++;
  }


}
