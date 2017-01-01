#include <stdio.h>

double fact(int n) {

  double c, fact = 1;

  for (c = 1; c <= n; c++)
        fact = fact * c;

  return fact;
}

int C(int n, int k) {
  return fact(n)/(fact(k)*fact(n-k));
}

int main(int argc, char ** argv) {
  printf("%lld\n", C(40,20));

}
