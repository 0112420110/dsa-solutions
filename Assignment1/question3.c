#include<stdio.h>
void quicksort(int nums[],int low,int high)
{
    if(low>=high)
        return;

    int i=low;
    int j=low-1;
    int pivot=high;
    int temp;

    while(i<=pivot)
    {
        if(nums[i]>=nums[pivot])
        {
            j++;

            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
        }
        else
            i++;
    }

    quicksort(nums,low,j-1);
    quicksort(nums,j+1,high);

}
int main()
{
    int n;
    scanf("%d",&n);

    printf("nums = ");

    int nums[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&nums[i]);
    }

    printf("k= ");
    int k;
    scanf("%d",&k);

    quicksort(nums,0,n-1);

    printf("Output: %d",nums[k-1]);

    return 0;
}
