#include<stdio.h>
int largestelement(int arr[],int n)
{
    int largest;
    if(n==1)
        return arr[n-1];

        largest=largestelement(arr,(n-1));
        if(arr[n-1]<largest){
            return largest;
        }
        else
            return arr[n-1];



}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",largestelement(arr,n));
    return 0;
}
