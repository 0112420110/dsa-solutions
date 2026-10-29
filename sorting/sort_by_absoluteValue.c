/*#include<stdio.h>
#include<stdlib.h>
void selectionsort(int arr[],int n){
    int i,j,minIn,temp;
    for(i=0;i<n-1;i++){
        minIn=i;
        for(j=i+1;j<n;j++){
            if(abs(arr[j])<abs(arr[minIn])){
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
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        selectionsort(arr,n);
        printArray(arr,n);

return 0;
}*/


//without using built-in function===========

#include<stdio.h>
int abs(int n){
if(n<0)
    return n*(-1);
else
    return n;
}
void selectionsort(int arr[],int n){
    int i,j,minIn,temp;
    for(i=0;i<n-1;i++){
        minIn=i;
        for(j=i+1;j<n;j++){
            if(abs(arr[j])<abs(arr[minIn])){
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
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        selectionsort(arr,n);
        printArray(arr,n);

return 0;
}
