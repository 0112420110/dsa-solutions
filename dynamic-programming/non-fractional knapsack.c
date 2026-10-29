#include<stdio.h>
int main(){
    int n;
    printf("Number of products: ");
    scanf("%d",&n);

    int product[n];
    printf("Enter product's number: ");

    for(int i=0;i<n;i++){
        scanf("%d",&product[i]);
    }

    int weight[n];
    printf("Enter weights of products: ");

     for(int i=0;i<n;i++){
        scanf("%d",&weight[i]);
    }

    int value[n];
    printf("Enter values of products: ");

     for(int i=0;i<n;i++){
        scanf("%d",&value[i]);
    }

    int capacity;
    printf("Enter total capacity: ");
    scanf("%d",&capacity);

    int dpTable[n+1][capacity+1];

    //initialize dp table
    for(int i=0;i<n+1;i++){
        for(int j=0;j<capacity+1;j++){
            dpTable[i][j]=0;
        }
    }

    //i=0 will remain 0 cause 0 product
    //j=0 will remain 0 cause 0 capacity
    // so, we start from i=1 and j=1
    for(int i=1;i<n+1;i++){
        for(int j=1;j<capacity+1;j++){
                if(weight[i-1]<=j){
                    int take= value[i-1]+dpTable[i-1][j-weight[i-1]];
                    int notTake=dpTable[i-1][j];

                    if(take>notTake){
                        dpTable[i][j]=take;
                        }
                        else
                            dpTable[i][j]=notTake;
                }
                else
                {
                    dpTable[i][j]=dpTable[i-1][j];
                }

                }

        }


    printf("Maximum profit: %d",dpTable[n][capacity]);

    int i=n;
    int j=capacity;

    printf("\npicked products: ");

    while(i>0 && j>0){
        if(dpTable[i][j]!=dpTable[i-1][j]){
            printf("%d ",product[i-1]);


            j=j-weight[i-1];
            i--;
        }
        else
            i--;
    }

return 0;
}
