#include<stdio.h>
void sort_by_index(int arr[],int n){
    int i,j,In,temp;
    for(i=0;i<n-1;i++)
    {
        In=i;
        if(i%2==0)
        {for(j=i+2;j<n;j=j+2){
            if(arr[j]<arr[In]){
                In=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[In];
        arr[In]=temp;
        }
        else
        {for(j=i+2;j<n;j=j+2){
            if(arr[j]>arr[In]){
                In=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[In];
        arr[In]=temp;
        }

    }
}
int main(){

    int  n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort_by_index(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
return 0;
}
