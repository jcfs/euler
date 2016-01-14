#include <stdio.h>
#include <math.h>

int count(int R, int C) {

  int r, c;
  int t = 0;
  for(r = 1; r <= R; r++) {
    for(c = 1; c <= C; c++) {
      int rowc = R/r+(R%r);
      rowc += (!(R%r) ? 0 : 1); 
      rowc += ((r != 1) ? (R-2)/r : 0);
      int colc = (C/c)+(C%c);
      colc += (!(C%c) ? 0 : 1);
      colc += ((c != 1) ? (C-2)/c : 0);

      t += rowc*colc;
    }
  }

  return t;
}

int main(int argc, char ** argv) {

  int i = 1;
  int j = 1;
  int m = 1000000;


  printf("%d\n", count(77,36));
  for(i = 1; i < 100; i++) {
    for(j = 1; j < 100; j++) {
      int c = count(i, j);
    
      if (abs(2000000-c) < m) {
        printf("%d: %d %d = %d\n", c, i, j, i*j);
        m = abs(2000000-c);
      } 
    }
  }
}
