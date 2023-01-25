#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;
    printf("Enter the no. of elements");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("Memory allocated");
    }
    printf("Enter the elements of the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("the elements of the array are:");
    for (i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
}