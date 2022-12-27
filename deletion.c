#include <stdio.h>
int main()
{
    int a[50], n, m, i, j, pos;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d value of Array\n", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nArray is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter the position you want to delete the array\n");
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("Array after delete the element is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}