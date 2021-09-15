#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr == NULL){
        printf("Memory not Allocated\n");
    }
    else{
        printf("Memory Allocated\n");
        for(int i=0;i<n;i++){
            printf("Enter the element ");
            scanf("%d",&ptr[i]);
        }
        printf("The elements of the array are \n");
        for(int i=0;i<n;i++){
            printf("%d\n",ptr[i]);
        }
        int k;
        printf("Enter the new size of the array ");
        scanf("%d",&k);
        ptr=realloc(ptr,k*sizeof(int));
        printf("Memory Reallocated Successfully\n");
        for(int i=0;i<k;i++){
            printf("Enter the element ");
            scanf("%d",&ptr[i]);
        }
        printf("The elements of the array are \n");
        for(int i=0;i<k;i++){
            printf("%d\n",ptr[i]);
        }

    }
}