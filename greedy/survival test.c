#include<stdio.h>
#include<math.h>
int main(){
    int S,N,M;
    printf("Enter survival days: ");
    scanf("%d",&S);

    printf("Per day food can buy: ");
    scanf("%d",&N);

    printf("Food required each day to survive: ");
    scanf("%d",&M);

    int totalFood=S*M;

    int sundayPresent=S/7;

    int buydays=S-sundayPresent;

    int maxFood=buydays*N;

    if(maxFood<totalFood){
            printf("It is impossible to survive");
    }
    else{
        int minimumdays=ceil((double)totalFood/N);
        printf("Total days required: %d",minimumdays);
    }
return 0;
}
