#include <stdio.h>

#define N 100

int main(int argc, char *argv[])
{
    int i, j, a[N];
    
    for (i = 2; i < N; i++) {
        a[i] = 1;
    }
    for (i = 2; i < N; i++) {
        if (a[i]) {
            for (j = i; i * j < N; j++) {
                a[i * j] = 0;
            }
        }
    }
    for (i = 2; i < N; i++) {
        if (a[i]) {
            printf("%4d ", i);
        }
    }
    return 0;
}