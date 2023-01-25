#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("the elements are:");
    for (i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
    }
}