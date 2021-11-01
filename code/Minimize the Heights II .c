//Minimize the Heights II 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k , n;
    printf("Enter the value of k and n\n");
    scanf("%d%d",&k,&n);
    int arr[5];
    n=5;
    printf("\nEnter the elements\n");

    for(int i =0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i]<k)
        {
            arr[i]+=k;
        }
        else
        {
            arr[i]-=k;
        }
    }

    int min = arr[n-1]-arr[0];

    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n-1 ; j++)
        {
            if(i != j)
            {
                int x = abs(arr[i]-arr[j]);
                if(min > x)
                min = x;
            }
        }
    }


    printf("The min diff is : %d",min);


return 0;
}