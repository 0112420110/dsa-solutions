#include<stdio.h>
int sumOfdigit(int n){
    int remainder;
if(n<=9)
    return n;
else{
    remainder=n%10;
    return remainder+sumOfdigit(n/10);
}

}
int main(){
    int  n;
    scanf("%d",&n);
    int sum=sumOfdigit(n);
    printf("%d",sum);
return 0;}
