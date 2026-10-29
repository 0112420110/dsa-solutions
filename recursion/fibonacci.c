#include<stdio.h>
int fib(int n){
if(n<=1){
    return n;
}
return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%dth fibonacci number: %d",n,fib(n));

return 0;
}

//stair problem
#include<stdio.h>
int ways(int n){
if(n<=1)
    return 1;
return ways(n-1)+ways(n-2);
}
int main(){
int n;
printf("Have to reach stair: ");
scanf("%d",&n);


int total=ways(n);
printf("\ntotal number of distinct ways: %d",total);

return 0;
}
