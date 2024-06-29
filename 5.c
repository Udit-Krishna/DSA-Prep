#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r1 = {10,5};
    struct Rectangle *p1 = &r1;

    printf("%d %d\n", r1.length, r1.breadth);
    printf("%d %d\n", (*p1).length, (*p1).breadth);
    printf("%d %d\n", p1->length, p1->breadth);

    printf("%d\n", sizeof(p1));
    printf("%d\n", sizeof(r1));

    // Pointer to structure in Heap
    struct Rectangle *p2;
    p2 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p2->length=20; p2->breadth=10;
    printf("%d %d\n", p2->length, p2->breadth);
    free(p2);

    return 0;
}