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
int smallest_difference(int arr[],int n){
    int i,diff=1234456;
    for(i=1;i<n;i++){
        if((arr[i]-arr[i-1])<diff)
            diff=arr[i]-arr[i-1];
    }
    return diff;
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
    printArray(arr,n);

  int diff=smallest_difference(arr,n);
  printf("\n%d",diff);

return 0;}

