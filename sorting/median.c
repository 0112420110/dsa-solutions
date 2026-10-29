#include<stdio.h>
void selectionsort(int arr[],int n){
int j,i,minIn,temp;
for(i=0;i<n-1;i++){
    minIn=i;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[minIn]){
            minIn=j;
        }
    }
    temp=arr[i];
    arr[i]=arr[minIn];
    arr[minIn]=temp;
}
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int findMedian(int arr[],int n){
    int i=0;
    return (arr[i]+arr[n-1])/2;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //sorting the array
    selectionsort(arr,n);
    //print the array
    //printArray(arr,n);
    //finding median
    int median=findMedian(arr,n);
    printf("\n%d",median);
return 0;}
