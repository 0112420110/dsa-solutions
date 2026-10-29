#include<stdio.h>
void quicksort(int arr[],int low,int high){
if(low>=high){
    return;
}
int i=low;
int j=low-1;
int pivot=high;
int temp;
while(i<=pivot){
    if(arr[i]<=arr[pivot]){
        j++;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
    }
    else{i++;}
}
quicksort(arr,low,j-1);
quicksort(arr,j+1,high);
}
int main(){
int n;
printf("size:  ");
scanf("%d",&n);
int arr[n];
printf("elements: ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

quicksort(arr,0,n-1);

printf("elements after sorted: ");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}


//For descending order=====

#include<stdio.h>
void quicksort(int arr[],int low,int high){
if(low>=high){
    return;
}
int i=low;
int j=low-1;
int pivot=high;
int temp;
while(i<=pivot){
    if(arr[i]>=arr[pivot]){
        j++;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
    }
    else{i++;}
}
quicksort(arr,low,j-1);
quicksort(arr,j+1,high);
}
int main(){
int n;
printf("size:  ");
scanf("%d",&n);
int arr[n];
printf("elements: ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

quicksort(arr,0,n-1);

printf("elements after sorted: ");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}




