#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, *q;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    q = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 5; i++)
        q[i] = p[i]; //all val in array p are copied into array q.
    free(p);         // the pointer p occupying memory is deleted.
    p = q;           // p is pointing to the pointer q which in turn points to an array of size 10. Now both p and q point to q.
    q = NULL;        // Since both p and q pointed to q, we nullify q since we need a bigger array in p.

    for (int j = 0; j < 5; j++)
        printf("%d \n", p[j]);

    return 0;
}