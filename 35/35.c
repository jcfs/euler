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

int ndigits(int n) {
  return floor(log10(abs(n)))+1;
}

int rotate(int n, int d) {

  int k = n % 10;

  k *= pow(10,d-1);
  n /= 10;

  return k+n;
}

int main(int argc, char ** argv) {
  int i = 9, j, l;
  int count = 0;
  
  while(i <= 1000000) {
    i+=2;

    if (is_prime(i)) {
      int cprime = 1;
      int d = ndigits(i); 
      l = i;
      for(j = 0; j < d-1; j++) {
        l = rotate(l, d);
        if (!is_prime(l)) {
          cprime = 0;
          break;
        }
      }
      if (cprime) {
        printf("%d is cprime\n", i);
        count++;
      }
    }
  }
  printf("%d\n", count+4);


}
