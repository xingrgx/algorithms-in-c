#include <stdio.h>

int main()
{
    int i, a[99];
    // set
    for (i = 0; i < 99; i++)
        a[i] = 98 - i;
    // print
    for (i = 0; i < 99; i++)
        printf("%d\n", a[i]);

    printf("******\n");
    // set
    for (i = 0; i < 99; i++)
        a[i] = a[a[i]];
    // print
    for (i = 0; i < 99; i++)
        printf("%d\n", a[i]);
}