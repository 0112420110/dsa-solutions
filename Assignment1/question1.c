#include<stdio.h>
long long maxSubArray(int nums[],int low,int high)
{
    if(low==high)                  //Base case
    {
        return nums[low];
    }

    int mid=(low+high)/2;
    long long leftsum=maxSubArray(nums,low,mid);
    long long rightsum=maxSubArray(nums,mid+1,high);

    long long sum=0;
    long long leftmax=nums[mid];

    for(int i=mid; i>=low; i--)
    {
        sum=sum+nums[i];
        if(sum>leftmax)
        {
            leftmax=sum;
        }
    }

    sum=0;
    long long rightmax=nums[mid+1];

    for(int i=mid+1; i<=high; i++)
    {
        sum=sum+nums[i];
        if(sum>rightmax)
        {
            rightmax=sum;
        }
    }

    long long crossSum=leftmax+rightmax;

    if(leftsum>=rightsum && leftsum>=crossSum)
        return leftsum;
    else if(rightsum>=leftsum && rightsum>=crossSum)
        return rightsum;
    else
        return crossSum;


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

    long long sum=maxSubArray(nums,0,n-1);
    printf("Output: %d",sum);

    return 0;
}
