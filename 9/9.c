#include <stdio.h>
#include <math.h>

int main(int argc, char ** argv) {
  int a, b, c;

  for(a = 0; a <= 1000; a++) {
    for(b = a + 1; b <= 1000-a; b++) {
      c = 1000 - a - b;
      if (c < b) continue;
      if (pow(a,2)+pow(b,2) == pow(c,2))
        printf("%d %d %d %d\n", a,b,c,a*b*c);
    }
  }


}
