#include <stdio.h>
#include<stdlib.h>
struct Array{
int *A,size,length;
};



int main(){
    struct Array arr;
    int n;
    printf("Enter Array Size \n");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;
    printf("Enter array index :\n");
    scanf("%d",&n);
    printf("Enter all elements :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    
    
    
    
    
    
    
    
    return 0;
}