#include <stdio.h>

char mem[1000];

int main(int argc, char ** argv) {

  int i = 0;
  int ch;
  while(scanf("%d,", &ch) != EOF) {
    mem[i] = ch;
    i++;
  }

  int a[3] = {'g','o','d'};
  int h;
  int s = 0;
  for(h = 0; h < i; h++) {
    printf("%c", mem[h]^a[h%3]);
    s+=mem[h]^a[h%3];
  }
  printf("%d\n", s);

}
