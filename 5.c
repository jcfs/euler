#include <stdio.h>

int main(int argc, char ** argv) {

  int n = 2500;

  while(1) {
    n++;

    int i = 0;
    int f = 1;

    for(i = 1; i <= 20; i++) {
      if (n % i) {
        f = 0;
      }
    }

    if (f) {
      printf("%d\n", n);
      break;
    }


  }



}
