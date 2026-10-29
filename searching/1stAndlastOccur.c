#include<stdio.h>
int first(int arr[],int target){
void printArray(int arr[], int n){
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}}

int binarysearch(int arr[], int n, int target){
    int low=0,high=n-1,mid,i;
    int result=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(target==arr[mid]){
             result= mid;
             high=mid-1;
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

