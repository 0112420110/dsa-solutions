#include<stdio.h>
float findsquareroot(float n){
float low=0,high=n,mid;
while((high-low)>.00001){
    mid=(low+high)/2;
    if((mid*mid)>n)
    {
        high=mid;
    }

    else
    {
         low=mid;
    }}
return (low+high)/2;
}
int main(){
   float n;
   printf("Enter your square number: ");
   scanf("%f",&n);
   float squareRoot=findsquareroot(n);
   printf("\n");
    printf("Square root number is: %f ",squareRoot);
return 0;}

