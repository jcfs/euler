#include <stdio.h>
#include <math.h>
#include <string.h>

long long m = 0;
void swap(char *a, char *b) { char t = *a; *a = *b; *b = t; }

void permute(char *a, int i, int n) {
  int j;
  if (i == (n-1)) {
    long long k = atoi(a+7);
    if (!(k%17)) {
      k = atoi(a+6)/10;
      if (!(k%13)) {
        k = atoi(a+5)/100;
        if (!(k%11)) {
          k = atoi(a+4)/1000;
          if (!(k%7)) {
            k = atoi(a+3)/10000;
            if (!(k%5)) {
              k = atoi(a+2)/100000;
              if (!(k%3)) {
                k = atoi(a+1)/1000000;
                if (!(k%2)) {
                  printf("+%s", a);
                  m += atoll(a);
                }
              }
            }
          }
        }
      }
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
  char s[11] = {'1','2','3','4','5','6','7','8','9','0', 0};
  
  permute(s, 0, strlen(s));
  printf("\n", m);
}
