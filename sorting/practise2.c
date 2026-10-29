#include<stdio.h>
void display(int arr[],int n){
int i;
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
int main(){
int n=6;
int i,j,key;
int arr[6]={14,4,3,6,75,5};
for(i=1;i<n;i++){
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;

}
display(arr,n);
return 0;}
