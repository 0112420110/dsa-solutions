#include<stdio.h>
int count=0;

void countVowel(char arr[],int low,int high){
if(low==high){
    if(arr[low]=='a'||arr[low]=='A'||
       arr[low]=='e'||arr[low]=='E'||
       arr[low]=='i'||arr[low]=='I'||
       arr[low]=='o'||arr[low]=='O'||
       arr[low]=='u'||arr[low]=='U')
        count=count+1;

       return;


}
int mid=(low+high)/2;
countVowel(arr,low,mid);
countVowel(arr,mid+1,high);
}
int main(){
    int n;
    scanf("%d",&n);

    char arr[n];

    for(int i=0;i<n;i++){
        scanf(" %c",&arr[i]);
    }

    countVowel(arr,0,n-1);
    printf("Total vowel: %d",count);
return 0;
}
