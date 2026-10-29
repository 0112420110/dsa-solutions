#include<stdio.h>
void display(int arr[], int n){
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
int main(){
 int n=6;
 int arr[6]={24,3,4,6,1,7};
 int i,j,temp;
 for(i=0;i<n-1;i++){
    for(j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
                temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;


        }
    }
 }
 display(arr,n);
 return 0;
 }
