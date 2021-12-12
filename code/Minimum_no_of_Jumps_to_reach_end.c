//Minimum no. of Jumps to reach end of an array

#include<stdio.h>
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

    int c =0 ;
    int dif =0;

    for(int i =0 ; dif<n-1 ;i+=arr[i])
    {
     dif += arr[i];
     c++;   
    }

    printf("\nJump = %d",c);
}
