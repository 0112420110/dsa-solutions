#include<stdio.h>
void printArray(int arr[], int n){
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
void selectionsort(int arr[], int n){
int i,j,minIn,temp;
for(i=0;i<n-1;i++){
        minIn=i;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[minIn]){
            minIn=j;
        }
    }
    temp=arr[i];
    arr[i]=arr[minIn];
    arr[j]=temp;

}
}
int binarysearch(int arr[], int n, int target){
    int low=0,high=n-1,mid,i;
    while(low<=high){
        mid=(low+high)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return -1;

}
int main(){
    int n,target;
    printf("enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
     printf("Before applying sorting:\n");
     printf("\n");
        printArray(arr,n);
        printf("\n");
         printf("After applying sorting:\n");
         selectionsort(arr,n);
         printf("\n");

        printArray(arr,n);

        printf("enter your target value: ");
        scanf("%d",&target);
        int result =binarysearch(arr,n,target);
        if(result==-1)
        {
            printf("target value does not exists.\n");

        }
        else
            printf("target value exists.\n");

return 0;}
