//https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1

#include<stdio.h>
#include<stdlib.h>

void reslt(int arr[],int n)
{
    for(int i =0 ; i<n ; i++)
    {
        if(i+1==arr[i])
        printf("%d",arr[i]);
    }
}
int main()
{
    int n ;
    scanf("%d",&n);

    int *arr=(int*) malloc(n*sizeof(int));
    for(int i =0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    reslt(arr,n);

return 0;
}