#include<stdio.h>
int linearsearch(int arr[], int n, int target){
    int target_in;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
                target_in=i;
                return target_in;

        }

    } return -1;

  }
void printArray(int arr[], int n){
int i;
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
int main(){
    int n,target;
    printf("enter size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of the array: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter your target:");
    scanf("%d",&target);
    int result=linearsearch(arr,n,target);
    if(result==-1){
        printf("target is not found");
    }
    else
    {printf("the target is found at index: %d ",result+1);}

return 0; }
