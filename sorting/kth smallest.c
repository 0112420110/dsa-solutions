#include<stdio.h>
void selectionsort(int arr[],int n){
int i,j,minIn,temp;
for(i=0;i<n-1;i++){
        minIn=i;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[minIn])
        {
            minIn=j;
        }

    }
    temp=arr[i];
    arr[i]=arr[minIn];
    arr[minIn]=temp;
}
}
void printArray(int arr[],int n){
int i;
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
int findElement(int arr[],int position){
return arr[position-1];
}
int main(){
    int n=8,position;
    int arr[8]={12,34,56,3,2,8,90,4};
    //sorting the array
    selectionsort(arr,n);
    printArray(arr,n);
    //printf("enter the position: ");
    scanf("%d",&position);
    int value=findElement(arr,position);
    printf("\n%d",value);

return 0;}

