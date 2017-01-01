#include <stdio.h>

int number[100][100];

int max(int a, int b){
    return a > b ? a : b;
}

int main(int argc, char ** argv) {
    int i = 0;
    int j = 0;
    int k = 0;


    for(i = 0; i < 100; i++) {
        j = i + 1;
        for(k = 0; k < j; k++) {
            scanf("%d", &number[i][k]);
        }
    }

    for(i = 0; i < 100; i++) {
        for(j = 0; j < i+1; j++) 
            printf("%d ", number[i][j]);
        printf("\n");
    }

    for(i = 98; i>=0; i--) {
        for(k = 0; k <= i; k++) {
            number[i][k] += max(number[i+1][k], number[i+1][k+1]);
        }
    }

    printf("%d\n", number[0][0]);

}
