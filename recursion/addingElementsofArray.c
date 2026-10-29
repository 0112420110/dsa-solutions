#include<stdio.h>
int sum(int arr[],int n){
if(n==0)
  return 0;
else{
return arr[n-1]+sum(arr,n-1);
}
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    printf("The elements of the array are: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The sum of the elements are: %d",sum(arr,n));
return 0;
}
