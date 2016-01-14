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

  for(i = 2, j = 0; i < 6000; i++) {
    if (is_prime(i)) {
      primes[j] = i;
      j++;
    }
  }

  int n = 1;
  while(1) {
    n+=2;
    if (is_prime(n)) continue;

    int f = 0;
    for(k = 0; !f && k < j; k++) {
      for(l = 1; l<=n;l++) {
        if (primes[k]+2*l*l == n) {
          f=1;
          break;
        }
      }
    }

    if (!f) {
      printf("%d\n", n);
      break;
    }


  }


}
