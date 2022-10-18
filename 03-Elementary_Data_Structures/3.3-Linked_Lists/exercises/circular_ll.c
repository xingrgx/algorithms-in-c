#include <stdio.h>
#include <stdlib.h>
#include "circular_ll.h"

link gen_cll(int begin, int end)
{
    link h = malloc(sizeof(*h)), p = h;
    int i;

    h->item = begin;
    h->next = h;

    for (i = begin + 1; i <= end; i++) {
        p->next = malloc(sizeof(*p));
        p = p->next;
        p->item = i;
        p->next = h;
    }
    return h;
}

void print_cll(link x)
{
    link p = x->next;
    printf("%d ", x->item);
    while (p != x) {
        printf("%d ", p->item);
        p = p->next;
    }
}