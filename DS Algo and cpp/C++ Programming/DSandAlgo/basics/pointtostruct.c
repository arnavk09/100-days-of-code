//B refers to bytes throughout. This is a program to point a pointer to a struct.
#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
    int l,b;
    //int takes up 4B on x64 and x86 machines; thus l and b together takes 8B of heap memory 
    //double takes up 8B on x64 and x86 machines. Writing "double l,b" thus allots 16B of heap memory.
};
int main()
{
    struct Rectangle r={10,5};
    struct Rectangle *p=&r;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->l=10;  
    p->b=10;
    //This is the important thing.
    printf("Malloc has default garbage value. In this case it's %d",p);
    return 0;
}

