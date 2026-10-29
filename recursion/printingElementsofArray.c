#include<stdio.h>
void printElements(int arr[],int n){
if(n==0)
    return;
printElements(arr,n-1);
printf("%d ",arr[n-1]);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printElements(arr,n);
return 0;
}
