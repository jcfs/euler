#include <stdio.h>

int rev(int n) {
  int r = n%10;
  n /= 10;

  while(n) {
    r *= 10;
    r += n%10;
    n/=10;
  }

  return r;
}

int main(int agrc, char ** argv) {

  int m = 0;
  int i, j;

  for(i = 999; i >= 100; i--)
    for(j = 999; j >= 100; j--) {
      int n = i*j;
      int r = rev(n);

      if (n == r) {
        if (n > m) m = n;
      }
    }

  printf("%d\n", m);

}
