#include<stdio.h>
long long violation=0;
int array[100000];

void mergeSort(int arr[],int low,int high)
{
    if(low==high)
        return;
    int mid=(low+high)/2;

    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);

    int i=low;
    int j=mid+1;
    int k=low;


//Coping small elements to the temporary array
    while(i<=mid &&j<=high)
    {
        if(arr[i]<=arr[j])
        {
            array[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            array[k]=arr[j];
            j++;
            k++;
            violation=violation+(mid+1)-i;
        }
    }


//Coping remaining element to the temporary array
    while(i<=mid)
    {
        array[k]=arr[i];
        k++;
        i++;
    }

    while(j<=high)
    {
        array[k]=arr[j];
        k++;
        j++;
    }

//Coping elements to the main array
    for(int i=low; i<=high; i++)
    {
        arr[i]=array[i];
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    mergeSort(arr,0,n-1);

    printf("%lld",violation);
    return 0;
}
