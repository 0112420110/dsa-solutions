#include<stdio.h>
void selectionsort(int arr[][2],int n){
    int i,j,minIn,temp;
    for(i=0;i<n-1;i++){
        minIn=i;
        for(j=i+1;j<n;j++){
            int dur_j=arr[j][1]-arr[j][0];
            int min_dur=arr[minIn][1]-arr[minIn][0];
            if(dur_j<min_dur){
                minIn=j;
            }

        }
        for(int k=0;k<2;k++){
            temp=arr[i][k];
        arr[i][k]=arr[minIn][k];
        arr[minIn][k]=temp;
        }

    }}
int main(){
    int m;
    scanf("%d",&m);
    int arr[m][2];
    for(int i=0;i<m;i++){

        scanf("%d %d",&arr[i][0],&arr[i][1]);
    }


    selectionsort(arr,m);

    for(int i=0;i<m;i++){


        printf("(%d, %d) ",arr[i][0],arr[i][1]);

    }

return 0;
}
