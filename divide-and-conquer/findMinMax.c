#include<stdio.h>
int min;
int max;
void findMinMax(int arr[],int n,int low,int high){

    if(low==high)
    {
            if(arr[low]<min)
            min=arr[low];
            if(arr[low]>max)
            max=arr[high];
            return;
            }
            if(high==low+1){
                if(arr[low]<arr[high]){
                    if(arr[low]<min)
                    {
                        min=arr[low];

                    }
                    if(arr[high]>max){
                        max=arr[high];
                    }
                }
                else
                {
                    if(arr[high]<min)
                        min=arr[high];
                    if(arr[low]>max)
                        max=arr[low];
                }
               return;
            }
             int mid=(low+high)/2;
                findMinMax(arr,n,low,mid);
                findMinMax(arr,n,mid+1,high);



}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Elements of the array are: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int low=0;
    int high=n-1;
    min=arr[0];
    max=arr[0];
    findMinMax(arr,n,low,high);
    printf("min: %d , max: %d",min,max);
return 0;
}
