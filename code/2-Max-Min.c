//Max or min

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

    int max  =0 , min = arr[0];

    for(int i =0 ; i<n ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }

        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    printf("\nMax = %d and Min = %d",max,min);

    return 0;
}
