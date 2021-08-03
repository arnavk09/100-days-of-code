#include <stdio.h>
#include <stdlib.h>
void fun1(int n)
{
    if (n > 0)
    {
        printf(" %d ", n);
        fun1(n - 1);
    }
}
int main()
{
    int x = 3;
    fun1(x);
}