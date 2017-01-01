#include <stdio.h>
#include <math.h>

int abundants[30000];
int na[28123] = {0};

int is_abundant(int n) {

  int i, sum = 0;

  for(i = 2; i <= sqrt(n); i++) {
    if (!(n%i)) {
      sum+=i;
      if (i != (n / i))
        sum+=(n/i);
    }
  }

  return sum+1 > n;
}


int main(int argc, char ** argv) {

  int i = 1, j = 0, k;

  for(i = 1; i <= 28123; i++) {
    if (is_abundant(i)) {
      abundants[j++] = i;
    }
  }

  long long s = 28122*(28122+1)/2;
  for(i = 0; i < j; i++) {
    for(k = i; k < j; k++) {
      if (abundants[i] + abundants[k] > 28123) break;
      if (!na[abundants[i] + abundants[k]])
        s-=(abundants[i] + abundants[k]);
      na[abundants[i] + abundants[k]] = 1;
    } 
  }

  printf("%lld\n", s);
}
