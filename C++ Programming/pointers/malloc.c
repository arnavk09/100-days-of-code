#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=6;
    int *b;
    int **c=&b;
    //Manually allocating a pointer to heap
    b=(int *)malloc(5*sizeof(int)); //manually allocates 5x2 bytes (int takes 2Bytes) i.e 10bytes in HEAP.
    printf("%d",b);//Delivers address of pointer location.
    return 0;
}

