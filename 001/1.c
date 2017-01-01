#include <stdio.h>

int main(int argc, char ** argv) {
  int sum = 0, i;
  
  for(i = 0; i < 1000; i++) {
    if (!(i%3) || !(i%5)) sum+=i;
  }

  printf("%d\n", sum);
}
