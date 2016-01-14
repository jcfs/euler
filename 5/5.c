#include <stdio.h>

int main(int argc, char ** argv) {

  int n = 2520;

  while(1) {
    n+=2520;

    int i = 0;
    int f = 1;

    for(i = 10; i <= 20; i++) {
      if (n % i) {
        f = 0;
      }
    }

    if (n % 2520) {
      f = 0;
    }

    if (f) {
      printf("%d\n", n);
      break;
    }

    printf("%d\n", n);


  }



}
