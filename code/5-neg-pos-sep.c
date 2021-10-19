// -ve +ve separate

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

    int j =0;
    for(int i =0 ; i<n ; i++)
    {
        if(arr[i]<0)
        {
            if(i !=j)
            swap(&arr[i],&arr[j++]);
            //j++;
        }
    }

    printf("\nThe arranged no are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
