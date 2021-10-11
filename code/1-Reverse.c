//Reverse

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

    printf("\nThe no stored is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

//Using 2 array

    printf("\n\nUsing 2 array\n");
    int ar[n];
    int x = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ar[x++] = arr[i];
    }

    printf("The reversed no is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

//Using 1 array
    x = n-1;
    printf("\n\nUsing 1 array\n");
    for(int i =0 ; i<n/2 ; i++)
    {
        int temp = arr[i];
        arr[i]= arr[x];
        arr[x--]=temp;
    }

    printf("The reversed no is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}