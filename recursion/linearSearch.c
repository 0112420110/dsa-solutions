#include<stdio.h>
int linearSearch(int arr[],int n,int key,int index){
    if(index==n)
        return -1;
    if(arr[index]==key){
        return index;
        }
        else {
            return linearSearch(arr,n,key,index+1);
        }

}
int main(){
    int n;
    int index=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    printf("Key found at index: %d",linearSearch(arr,n,key,index));
return 0;
}
