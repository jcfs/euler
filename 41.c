#include <stdio.h>
#include <math.h>
#include <string.h>

int is_prime(int n) {

  int i = 0;

  for(i = 2; i <= sqrt(n); i++) {
    if (!(n%i))
      return 0;
  }

  return 1;
}
int m = 0;

void swap(char *a, char *b) { char t = *a; *a = *b; *b = t; }

void permute(char *a, int i, int n) {
  int j;
  if (i == (n-1)) {
    int k = atoi(a);
    if (is_prime(k)) {
      if (k > m) m = k;
    } 
  }
  else {
    for (j = i; j < n; j++) {
      swap((a+i), (a+j));
      permute(a, i+1, n);
      swap((a+i), (a+j));
    }
  }
}

int main(int argc, char ** argv) {
  char s[9] = {'1','2','3','4','5','6','7',8,9};
  int i = strlen(s);
  while(m == 0) {
    permute(s, 0, strlen(s));
    s[--i] = 0;
  }
  printf("%d\n", m);
}
