#include<stdio.h>
int smallestElement(int arr[],int n)
{
    int smallest;
    if(n==1)
        return arr[0];
    smallest=smallestElement(arr,n-1);
    if(smallest>arr[n-1])
        return arr[n-1];
    else
        return smallest;
}
int main()
{int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("smallest element: %d",smallestElement(arr,n));
    return 0;
}
