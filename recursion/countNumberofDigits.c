#include<stdio.h>
int digit(int n){
    if(n<=9)
        return 1;

        return 1+digit(n/10);

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",digit(n));
return 0;
}
