#include <stdio.h>
#include <math.h>

int sum_d(int n) {
  int i = 0, sum = 0;
  for(i = 1; i <= sqrt(n); i++) {
    if (!(n % i)) {
      sum+=i;
      if (i != (n/i)) {
        sum+=(n/i);
      }
    }
  }

  return sum-n;
}

int main(int argc, char ** argv) {

  int s = 0;
  int a = 0;

  for(a = 1; a < 10000; a++) {
    int b = sum_d(a);
    int c = sum_d(b);
    if (a != b && a == c) {
      s+=a+b; 
      printf("%d %d\n", a, b);
    }
  }

  printf("%d\n", s/2);

}
