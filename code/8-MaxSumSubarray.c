// kadane Algo

#include <stdio.h>

int main()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe no stored are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int ms = -10000000;
    int cs = 0;
    for (int i = 0; i < n; i++)
    {
        cs += arr[i];

        if(ms<cs)
        {
            ms = cs;
        }

        if (cs < 0)
        {
            cs = 0;
        }
    }

    printf("\n\nLargest sum is : %d",ms);

    return 0;
}