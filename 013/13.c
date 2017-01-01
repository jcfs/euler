#include <stdio.h>

char result[100] = {0};

int main(int argc, char ** argv) {

  int i = 0;
  char line[51];

  while(scanf("%s", line) != EOF) {
    printf("%s\n", line);


    for(i = 49; i >= 0; i--) {
      result[99-(49-i)] += line[i] - '0';

      int iv = result[99-(49-i)]-9;

      if (iv > 0) {
        result[99-(49-i)] = result[99-(49-i)] % 10;
        int j = 1;
        while(iv > 0) {
          result[99-(49-i+j)]++;
          iv = result[99-(49-i+j)] - 9;
          if (iv > 0) {
            result[99-(49-i+j)] = result[99-(49-i+j)] % 10;
          }
          j++;
        } 
      }
    }
  }

  for(i = 0; i < 100; i++) printf("%d", result[i]);
}
