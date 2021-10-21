//Union of two array

#include<stdio.h>

int main()
{
    printf("The the sizes of two array\n");
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int arr1[n1],arr2[n2];

    printf("\nEnter the elements of array 1:\n");
    for(int i =0 ; i<n1 ; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("\nEntered elements of array 1 are :\n");
    for(int i =0 ; i<n1 ; i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\n\nEnter the elements of array 2:\n");
    for(int i =0 ; i<n2 ; i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("\nEntered elements of array 2 are :\n");
    for(int i =0 ; i<n2 ; i++)
    {
        printf("%d ",arr2[i]);
    }
    int c =0;

    for(int i = 0 ; i<n1 ; i++)
    {
        for(int j =0 ; j<n2 ; j++)
        {
            if(arr1[i] == arr2[j])
            c++;
        }
    }

    printf("\n\nUnion of two array is : %d\n",(n1+n2)-c);
    return 0;
}

