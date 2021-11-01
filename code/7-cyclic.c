//Cyclic Array

#include<stdio.h>

int main()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d",&n);
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

    int a = arr[n-1];
    for(int i = n-1 ; i>=0 ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0] = a;

    printf("\n\nThe cyclic arrray is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }


}