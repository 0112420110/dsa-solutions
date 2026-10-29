#include<stdio.h>

int array[50000];
long long reversePairs=0;


void mergeSort(int nums[],int low,int high)
{

    if(low>=high)
    {
        return;
    }

    int mid=(low+high)/2;

    mergeSort(nums,low,mid);
    mergeSort(nums,mid+1,high);

    int i=low;
    int j=mid+1;


    while(i<=mid)
    {
        while(j<=high && (long long)nums[i]>(2LL*nums[j]))
        {

            j++;

        }
        reversePairs=reversePairs+(j-(mid+1));

        i++;
    }

    i=low;
    j=mid+1;
    int k=low;

    while(i<=mid && j<=high)
    {
        if(nums[i]<=nums[j])
        {
            array[k]=nums[i];
            i++;
        }
        else
        {
            array[k]=nums[j];
            j++;

        }
        k++;
    }

    while(i<=mid)
    {
        array[k]=nums[i];
        k++;
        i++;
    }

    while(j<=high)
    {
        array[k]=nums[j];
        k++;
        j++;
    }

    for(int i=low; i<=high; i++)
    {
        nums[i]=array[i];
    }

}
int main()
{
    int n;
    scanf("%d",&n);

    int nums[n];
    printf("nums = ");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&nums[i]);
    }

    mergeSort(nums,0,n-1);

    printf("Output: %lld",reversePairs);

    return 0;
}
