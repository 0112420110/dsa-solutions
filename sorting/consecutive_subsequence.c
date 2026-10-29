#include<stdio.h>
int long_consecutive_sub(int arr[],int n){
    int count=1;
    int max=1;
    for(int i=1;i<n;i++){

        if((arr[i]-arr[i-1])==1)
        {count++;

        }
        else if(arr[i]==arr[i-1]){
            continue;
        }
    else
    {count=1;
    }
    if(count>max){
        max=count;
    }
    }
    return max;
}
void sorting(int arr[],int n){
    int i,j,temp,minIn;
    for(i=0;i<n-1;i++){
        minIn=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minIn])
            {
                minIn=j;
            }
        }
        if(minIn!=i){
            temp=arr[i];
            arr[i]=arr[minIn];
            arr[minIn]=temp;
        }
    }
}
int  main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
        sorting(arr,n);
        int result=long_consecutive_sub(arr,n);
        printf("%d",result);
return 0;
}
