// add elements dynamically
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter the no of elements:");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Etner the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("The sum of the elements is: %d", sum);
}