#include <stdio.h>
#include <stdlib.h>
typedef struct node *link;
typedef int Item;

struct node
{
    Item item;
    link next;
};

int main(int argc, char *argv[])
{
    int N = atoi(argv[1]), M = atoi(argv[2]);

    // a one-node circular list for 1
    link t = malloc(sizeof(*t)), x = t;
    int i;
    t->item = 1;
    t->next = t;

    // insert 2 through N to that circular
    for (i = 2; i <= N; i++) {
        x->next = malloc(sizeof(*x));
        x = x->next;
        x->item = i;
        x->next = t;
    }

    // list still has more than 1 node
    while (x != x->next) {
        for (i = 1; i < M; i++) {
            x = x->next;
        }
        printf("%d ", x->next->item);
        x->next = x->next->next;
    }
    printf("\n%d\n", x->item);
    return 0;
}