#include <stdio.h>
#include <math.h>

int is_prime(int n) {

  int i = 0;

  for(i = 2; i <= sqrt(n); i++) {
    if (!(n%i))
      return 0;
  }

  return 1;
}

int primes[1000000];

int main(int argc, char ** argv) {
  int i = 9, j, l, k;
  int count = 0;

  for(i = 2, j = 0; i < 4000; i++) {
    if (is_prime(i)) {
      primes[j] = i;
      j++;
    }
  }
  int s = 0;
  int m = 0;
  for(k = 0; k < j; k++) {
    s = 0;
    count = 0;
    for(l = k; l < j; l++) {
      s+=primes[l];
      count++;
      if (s > 1000000) break;
      if (is_prime(s)) {
        if (count > m) {
          m = count;
          printf("%d %d %d\n", primes[l], s, m);
        }
      }
    }
  } 

}
