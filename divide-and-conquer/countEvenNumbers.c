#include<stdio.h>
int total=0;
void countEven(int arr[],int low,int high){

    if(low==high){
            if(arr[low]%2==0)
             total=total+1;
   return;
    }

        int mid=(low+high)/2;

    countEven(arr,low,mid);
    countEven(arr,mid+1,high);

}
int main(){
    int n;
    scanf("%d",&n);
     int arr[n];

     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }

     countEven(arr,0,n-1);
     printf("Total even number: %d",total);



return 0;
}
