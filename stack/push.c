#include<stdio.h>
int top=-1;
void push(int stk[],int x, int n){
    if(top==n){
        printf("\nstack is overflow.");
    }
    else
    {
        top++;
        stk[top]=x;
    }

}
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int stk[n];
    push(stk,x,n);


return 0;
}
