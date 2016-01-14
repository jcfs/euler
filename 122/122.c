#include <stdio.h>


int count_b(int n) {

  int c = 0;

  printf("%d\n", n);
  while(n) {
    c++;
    n = n>>1;
  }

  return c;
}

int main(int argc, char ** argv) {
  int i = 1;
  int sum = 0;

  for(i = 1; i <= 200; i++) {
    sum += count_b(i)+1;
  }

  printf("%d\n", sum);

}
