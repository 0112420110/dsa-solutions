#include<stdio.h>
int array[100];
void mergesort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid);// left halves

    mergesort(arr,mid+1,high);//right halves

    int i=low;
    int j=mid+1;
    int k=low;

    //coping small element to the temporary array
    while(i<=mid &&j<=high){
    if(arr[i]<=arr[j]){
        array[k]=arr[i];
        i++;
    }
    else{
        array[k]=arr[j];
        j++;
    }
    k++;
    }

    //coping remaining element to the temporary array
    while(i<=mid){
        array[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high){
        array[k]=arr[j];
        k++;
        j++;
    }

    //coping elements from temporay to main array
    for(int i=low;i<=high;i++){
        arr[i]=array[i];
    }
}
int main(){

    int n;
    printf("Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Elements: ");
    for(int i=0;i<n;i++)   {
        scanf("%d",&arr[i]);
    }

    mergesort(arr,0,n-1);

     printf("Elements after sorting: ");
    for(int i=0;i<n;i++)   {
        printf("%d ",arr[i]);
    }
return 0;
}



//For descending order====
#include<stdio.h>
int array[100];

void mergeSort(int arr[],int low,int high){
if(low>=high){
    return;
}

int mid=(low+high)/2;

mergeSort(arr,low,mid);

mergeSort(arr,mid+1,high);

int i=low;
int j=mid+1;
int k=low;

while(i<=mid && j<=high){
    if(arr[i]>=arr[j]){
        array[k]=arr[i];
        i++;
    }
    else
    {
        array[k]=arr[j];
        j++;
    }
    k++;
}

while(i<=mid){
    array[k]=arr[i];
    i++;
    k++;
}

while(j<=high){
    array[k]=arr[j];
    j++;
    k++;
}

for(int i=low;i<=high;i++){
    arr[i]=array[i];
}
}
int main(){
    int n;
    printf("size: ");
    scanf("%d",&n);

    int arr[n];

    printf("elements: ");
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }

     mergeSort(arr,0,n-1);

     printf("elements after sorting: ");
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
     }


return 0;}

