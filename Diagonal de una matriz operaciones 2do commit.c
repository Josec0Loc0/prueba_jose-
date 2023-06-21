#include <stdlib.h>
#include <time.h>

int main() {
    
        int a[3][2], b[3][2], c[3][2];
    int i, j;
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            a[i][j] = rand() % 10 + 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            b[i][j] = rand() % 10 + 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }


    return 0;
}
