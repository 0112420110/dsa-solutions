#include<stdio.h>
int maxSumSubarray(int arr[],int low,int high)
{
    if(low==high)  //Base case
        return arr[low];


    int mid=(low+high)/2;

    int leftsum=maxSumSubarray(arr,low,mid);
    int rightsum=maxSumSubarray(arr,mid+1,high);

    int sum=0;
    int maxleft=arr[mid];
    for(int i=mid; i>=low; i--)
    {
        sum=sum+arr[i];
        if(sum>maxleft)
            maxleft=sum;
    }

    sum=0;
    int maxright=arr[mid+1];
    for(int i=mid+1; i<=high; i++)
    {
        sum=sum+arr[i];
        if(sum>maxright)
            maxright=sum;
    }

    int crossSum=maxleft+maxright;

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

    printf("size: ");
    scanf("%d", &n);

    int arr[n];

    printf("elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result=maxSumSubarray(arr,0,n-1);
    printf("%d ",result);
    return 0;
}




//Keeping trace of the start and index=====
#include<stdio.h>
int startIndex;
int endIndex;
int maxSumSubarray(int arr[],int low,int high)
{
    if(low==high)  //Base case

    {
        startIndex=low;
        endIndex=high;
        return arr[low];
    }

    int mid=(low+high)/2;

    int leftsum=maxSumSubarray(arr,low,mid);
    int leftStart=startIndex;
    int leftEnd=endIndex;

    int rightsum=maxSumSubarray(arr,mid+1,high);
    int rightStart=startIndex;
    int rightEnd=endIndex;

    int sum=0;
    int maxleft=arr[mid];
    int crossStart=mid;
    for(int i=mid; i>=low; i--)
    {
        sum=sum+arr[i];
        if(sum>maxleft)
        {
            maxleft=sum;
            crossStart=i;
        }
    }

    sum=0;
    int crossEnd=mid+1;
    int maxright=arr[mid+1];
    for(int i=mid+1; i<=high; i++)
    {
        sum=sum+arr[i];
        if(sum>maxright)
        {
            maxright=sum;
            crossEnd=i;
        }

    }

    int crossSum=maxleft+maxright;

    if(leftsum>=rightsum && leftsum>=crossSum)
    {
        startIndex=leftStart;
        endIndex=leftEnd;
        return leftsum;
    }

    else if(rightsum>=leftsum && rightsum>=crossSum)
    {
        startIndex=rightStart;
        endIndex=rightEnd;
        return rightsum;
    }

    else
    {
        startIndex=crossStart;
        endIndex=crossEnd;
        return crossSum;
    }

}
int main()
{
    int n;

    printf("size: ");
    scanf("%d", &n);

    int arr[n];

    printf("elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result=maxSumSubarray(arr,0,n-1);
    printf("Maximum sum subarray: %d ",result);
    printf("\nStart index: %d",startIndex );
    printf("\nEnd index: %d",endIndex);

    printf("\nAnd the subarray is: ");
    for(int i=startIndex; i<=endIndex; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}






//FOR MINIMUM SUM SUBARRAY======

#include<stdio.h>
int startIndex;
int endIndex;
int minSumSubarray(int arr[],int low,int high)
{
    if(low==high)  //Base case

    {
        startIndex=low;
        endIndex=high;
        return arr[low];
    }

    int mid=(low+high)/2;

    int leftsum=minSumSubarray(arr,low,mid);
    int leftStart=startIndex;
    int leftEnd=endIndex;

    int rightsum=minSumSubarray(arr,mid+1,high);
    int rightStart=startIndex;
    int rightEnd=endIndex;

    int sum=0;
    int minleft=arr[mid];
    int crossStart=mid;
    for(int i=mid; i>=low; i--)
    {
        sum=sum+arr[i];
        if(sum<minleft)
        {
            minleft=sum;
            crossStart=i;
        }
    }

    sum=0;
    int crossEnd=mid+1;
    int minright=arr[mid+1];
    for(int i=mid+1; i<=high; i++)
    {
        sum=sum+arr[i];
        if(sum<minright)
        {
            minright=sum;
            crossEnd=i;
        }

    }

    int crossSum=minleft+minright;

    if(leftsum<=rightsum && leftsum<=crossSum)
    {
        startIndex=leftStart;
        endIndex=leftEnd;
        return leftsum;
    }

    else if(rightsum<=leftsum && rightsum<=crossSum)
    {
        startIndex=rightStart;
        endIndex=rightEnd;
        return rightsum;
    }

    else
    {
        startIndex=crossStart;
        endIndex=crossEnd;
        return crossSum;
    }

}
int main()
{
    int n;

    printf("size: ");
    scanf("%d", &n);

    int arr[n];

    printf("elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result=minSumSubarray(arr,0,n-1);
    printf("Minimum sum subarray: %d ",result);
    printf("\nStart index: %d",startIndex );
    printf("\nEnd index: %d",endIndex);

    printf("\nAnd the subarray is: ");
    for(int i=startIndex; i<=endIndex; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}





