#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    int a = 10;
    int *p = &a;

    int* b = malloc(sizeof(int));
    int i = 2;
    *b = 2 * i;

    printf("p's value: %d\n", *p);
    printf("a's reference: %p\n", &a);
    printf("a's value: %d\n", a);
    printf("b's value: %d\n", *b);
    printf("b's address: %p\n", b);
}
