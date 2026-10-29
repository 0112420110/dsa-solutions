//given an intger n,have to check if n==4 to the power x.
//if n== 4 to the power x, return true, else return false.
#include<stdio.h>
#include<stdbool.h>

bool powerCheck(int n){

   if(n==1)
   return true;

   if(n<=0 || n%4!=0) // every time n k 4 diye divide krle remainder 0 asbe if n==4 to the power x
    return false;

    return powerCheck(n/4);
    // return type tkle always return krbo jno result,function k jkhan tke call kra hoyeche sekhane jai

}
int main(){

int n;
scanf("%d",&n);

 bool check=powerCheck(n);
 printf("%d",check);
return 0;}
