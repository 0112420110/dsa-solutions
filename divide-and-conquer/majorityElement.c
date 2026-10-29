#include<stdio.h>
int countOccurances(int arr[],int low,int high,int value){
int count=0;
for(int i=low;i<=high;i++){
    if(arr[i]==value)
        count++;
}
return count;
}

int majorityElement(int arr[],int low,int high){
if(low==high){
   return arr[low];
}

int mid=(low+high)/2;
int leftvalue=majorityElement(arr,low,mid);
int rightvalue=majorityElement(arr,mid+1,high);

if(leftvalue==rightvalue) //left and right e same element tkle oi element ta k return kre dibo
    return leftvalue;

    int leftCount=countOccurances(arr,low,high,leftvalue);
    int rightCount=countOccurances(arr,low,high,rightvalue);

    if(leftCount>rightCount)
        return leftCount;
    else
        return rightCount;

}
int main(){
    int n;
    scanf("%d",&n);
     int arr[n];

     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }

     int majority=majorityElement(arr,0,n-1);
     printf("Majority element is: %d",majority);



return 0;
}
