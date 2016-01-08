#include <stdio.h>

int main(int agrc, char ** argv) {

  int n, e, i=0, l;
  int mn = 0, me = 1;

  while(scanf("%d,%d\n", &n, &e) != -1) {
    i++;
    if (e*log(n) > me*log(mn)) {
      me = e;
      mn = n;
      l = i;
    }
  }

  printf("%d\n", l);


}
