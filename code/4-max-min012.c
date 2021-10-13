// 0 1 2 arrange

/*
If two transver allowed then count their no's and then arrange accdly.
*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

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

    int mid = 0, low = 0, high = n - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
        {
            swap(&arr[mid++], &arr[low++]);
            break;
        }
        case 1:
        {
            mid++;
            break;
        }
        case 2:
        {
            swap(&arr[mid++], &arr[high--]);
            break;
        }
        }
    }

    printf("\nThe arranged no are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
