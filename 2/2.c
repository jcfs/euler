#include <stdio.h>

int main(int argc, char ** argv) {

  int i = 1, j = 2, t;
  int sum = 2;

  while(j < 4000000) {
    t = j;
    j = i + j;
    i = t;

    if (j > 4000000) break;
    printf("%d\n", j);
    if (!(j%2)) sum+=j;


    
  }

  printf("%d\n", sum);

}
