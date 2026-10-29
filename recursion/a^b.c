#include<stdio.h>
int powerCalculation(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else{
        return a*powerCalculation(a,(b-1));
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
   printf("%d",powerCalculation(a,b));

return 0;
}
