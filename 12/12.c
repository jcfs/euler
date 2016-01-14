#include <stdio.h>
#include <math.h>

int factors(long long n) {
  int i = 0, c = 0;

  for(i = 1; i <sqrt(n); i++) {
    if (!(n%i)){ 
      c++;
    }
  }

  return c*2 + 1;
}


int main(int argc, char ** argv) {

  long long n = 0, i = 1;
  int f = 0;
  
  while(f <= 500) {
    n += i++;
    f = factors(n);
  }

  printf("%lld\n", n);
}
