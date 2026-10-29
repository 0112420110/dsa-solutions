#include<stdio.h>
int findsquareroot(int n){
int low=0,high=n,mid;
while(low<=high){
    mid=(low+high)/2;
    if((mid*mid)==n)
        return mid;
    else if((mid*mid)>n)
    {
        high=mid-1;
    }
    else
        low=mid+1;
}
return -1;
}
int main(){
   int n;
   printf("Enter your square number: ");
   scanf("%d",&n);
   int squareRoot=findsquareroot(n);
   printf("\n");

   if(squareRoot==-1){
    printf("perfect square root number does not exist.");
   }
   else
   printf("Square root number is: %d ",squareRoot);
return 0;}
