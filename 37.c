#include <stdio.h>
#include <math.h>

int is_prime(int n) {

  int i = 0;

  if (n == 1) return 0;
  for(i = 2; i <= sqrt(n); i++) {
    if (!(n%i))
      return 0;
  }

  return 1;
}

int truncate_left(int val, int base) {    
  int Multiplier = 1, LeftDigit = val;
  while(LeftDigit > base) {
    LeftDigit /= base;
    Multiplier *= base;
  }
  return val - (LeftDigit * Multiplier);
}
int main(int argc, char ** argv) {
  int i = 9, j, l, k;
  int count = 0;


  for(i = 10; i < 1000000; i++) {
    if (is_prime(i)) {

      int f = 1;
      int r = i/10;

      while(r) {
        if (!is_prime(r)) f = 0;
        r /= 10;
      }

      int l = truncate_left(i, 10);

      while(l) {
        if (!is_prime(l)) f = 0;
        l = truncate_left(l, 10);
      }

      if (f) {
        printf("%d\n  ", i);
      }
      if (f) {
        r = i/10;
        while(r) {
          printf("%d ", r);
          r /= 10;
        }
        printf("\n  ");
      }

      if (f) {
        l = truncate_left(i, 10);
        while(l) {
          printf("%d ", l);
          l = truncate_left(l, 10);
        }
        printf("\n");
      }


      if (f) {
        count+=i;
        printf("%d %d\n", i, count);
      }
    }
  }

}
