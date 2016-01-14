#include <stdio.h>

long long colatz(long long n) {

  int c = 1;
  while(n != 1) {
    c++;
    if (n % 2) n = 3*n + 1;
    else n /= 2;
  }

  return c;
}

int main(int argc, char ** argv) {

  long long m = 0;
  int k = 0, i;

  for(i = 1; i < 1000000; i++) {
    long long c = colatz(i);
    printf("%d %lld\n", i, c);
    if (c > m) {
      m = c;
      k = i;
    }
  }

  printf("%d\n", k);
}
