#include<stdio.h>
void selectionsort(int arr[][],int m,int n){
    int i,j,minIn,temp;
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
void merging(int arr[],int arrr[],int arrrr[],int m,int n){
    int i=0;
    int j=0;
    int k;
    for(k=0;k<m+n;k++){
         if(arr[i]<arrr[j]){
        arrrr[k]=arr[i];
        i++;
    }
    else
    {
        arrrr[k]=arrr[j];
        j++;
    }
    }

}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m],arrr[n], arrrr[m+n];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arrr[i]);
    }
    selectionsort(arr,m);
    selectionsort(arrr,n);
    merging(arr,arrr,arrrr,m,n);
    for(int i=0;i<m+n;i++){
        printf("%d ",arrrr[i]);
    }
return 0;
}
