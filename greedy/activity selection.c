#include<stdio.h>
void quicksort(int start[],int end[],int low,int high){
if(low>=high)
{
    return;
}
int i=low;
int j=low-1;
int pivot=high;
int temp;
while(i<=pivot){
    if(end[i]<=end[pivot]){
        j++;
        temp=end[i];
        end[i]=end[j];
        end[j]=temp;

        temp=start[i];
        start[i]=start[j];
        start[j]=temp;
        i++;
    }
    else
        i++;
}
quicksort(start,end,low,j-1);
quicksort(start,end,j+1,high);
}
int main(){

    int n;
    printf("Enter nubmer of activity: ");
    scanf("%d",&n);
    int start[n];
    int end[n];
    printf("Enter start time: ");
    for(int i=0;i<n;i++){
        scanf("%d",&start[i]);
    }

     printf("Enter end time: ");
    for(int i=0;i<n;i++){
        scanf("%d",&end[i]);
    }

    quicksort(start,end,0,n-1);

    printf("\nSelected activity: ");
    printf("1 ");
    int count=1;
    int j=0;
    for(int i=1;i<n;i++){
        if(start[i]>=end[j]){
            printf("%d ",i+1);
            count++;
            j=i;

        }
    }

    printf("\nTotal number of selected activity: %d",count);

return 0;
}



//Now we get the actvity number after sorting.To keep origianl activity number=============
#include<stdio.h>
void quicksort(int start[],int end[],int low,int high,int id[]){
if(low>=high)
{
    return;
}
int i=low;
int j=low-1;
int pivot=high;
int temp;
while(i<=pivot){
    if(end[i]<=end[pivot]){
        j++;
        temp=end[i];
        end[i]=end[j];
        end[j]=temp;

        temp=start[i];
        start[i]=start[j];
        start[j]=temp;

        temp=id[i];
        id[i]=id[j];
        id[j]=temp;

        i++;
    }
    else
        i++;
}
quicksort(start,end,low,j-1,id);
quicksort(start,end,j+1,high,id);
}
int main(){

    int n;
    printf("Enter nubmer of activity: ");
    scanf("%d",&n);
    int start[n];
    int end[n];
    int id[n];
    printf("Enter start time: ");
    for(int i=0;i<n;i++){
        scanf("%d",&start[i]);
    }

     printf("Enter end time: ");
    for(int i=0;i<n;i++){
        scanf("%d",&end[i]);
    }

    //Original index number of activity
     for(int i=0;i<n;i++){
       id[i]=i+1;
    }


    quicksort(start,end,0,n-1,id);

    printf("\nSelected activity: ");
    printf("%d ",id[0]);
    int count=1;
    int j=0;
    for(int i=1;i<n;i++){
        if(start[i]>=end[j]){
            printf("%d ",id[i]);
            count++;
            j=i;

        }
    }

    printf("\nTotal number of selected activity: %d",count);

return 0;
}


