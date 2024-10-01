#include <stdio.h>
#include <stdlib.h> //

int main()
{
    //Use of malloc
    int *ptr;
    int n;
    printf("Enter the size of the array element you want to create = ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element number %d of this array = ",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The element at %d of this array is %d\n",i, ptr[i]);
    }

    return 0;
}
