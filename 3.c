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

int main(int argc, char ** argv) {

  long long i = 600851475143, p = 1;
  int k;

  for(k = 1; k <= 500000; k++) {
    if (is_prime(k) && !(i%k)) p*=k;
    if (p == i) {
      printf("%d\n", k);
      break;
    }
  }
}
