//Find the Duplicate Number

#include <stdio.h>

void main()
{
    printf("Enter the size of array\n");
    int n ;
    scanf("%d",&n);
    int arr[n];

    printf("\nEnter the elements\n");
    for(int i =0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    int no =0;
    for(int i = 0 ; i<n ; i++)
    {
        int c = 0;
        for(int j =0 ; j<n ; j++)
        {
            if(arr[i]==arr[j]) c++;

        }
        if(c==2)
        {
            printf("\nThe repeated no is : %d",arr[i]);
            break;
        }
    }

}

/*o(n)
sorted them and then find i == i+1
*/

/*
Linkedlist  cyclic method
*/