//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

#include<stdio.h>
#include<stdlib.h>

void out(int arr[] , int n , int x)
{
    int a,b;
    a=b=-1;
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i]==x && arr[i-1]!=x)
        a=i;
        
        if(arr[i]==x && arr[i+1]!=x)
        {
        b=i;
        break;
        }
    }

    printf("fisrt index : %d last index:%d",a,b);
}
int main()
{
    int n , x;
    scanf("%d%d",&n,&x);

    int *arr=(int*) malloc(n*sizeof(int));
    for(int i =0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    out(arr,n,x);

return 0;
}