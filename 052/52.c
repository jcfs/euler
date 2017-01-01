#include <stdio.h>
#include <string.h>

int is_perm(int n, int k) {
    int i, j;

    char s1[64];
    char s2[64];

    sprintf(s1, "%d\0", n);
    sprintf(s2, "%d\0", k);

    if (strlen(s1) != strlen(s2)) return 0;

    for(i = 0; i < strlen(s1); i++) {
        for(j = 0; j < strlen(s2); j++) {
            if (s1[i] == s2[j]) {
                s2[j] = -1;
                break;
            }
        }
    }

    char r = 1;

    for(i = 0; i < strlen(s2); i++) 
        if (s2[i] != -1) r = 0;

    return r;
}

int main(int argc, char ** argv) {

    int i = 1;

    while(i++) {
        if (is_perm(i, 2*i) && is_perm(i, 3*i) && is_perm(i, 4*i) && is_perm(i, 5*i) && is_perm(i, 6*i)) {
            printf("%d\n", i);
            break;
        }
    }
}
