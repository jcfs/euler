#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[200];
} name;

name names[10000];

int compare(const void * n1, const void * n2) {
  name na = *(name *)n1;
  name nb = *(name *)n2;
  
  int i = 0;
  while(na.name[i] == nb.name[i]) i++;

  return na.name[i] > nb.name[i];

}

int main(int argc, char **argv) {

  int i = 0, j = 0, k = 0;;
  char test[100];

  while(scanf("%s", names[i++].name) != -1);
  qsort(names, i-1, sizeof(name), compare);

  long long sum = 0;
  for(j = 0; j < i-1; j++, k = 0) {
    int cs = 0;
    
    for(k = 0; k < strlen(names[j].name); k++) 
      cs += names[j].name[k]-'A'+1;

    sum += ((j+1)*cs);
  }

  printf("%lld\n", sum);

}
