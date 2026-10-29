#include<stdio.h>
void quicksort(float ratio[],int low, int high,int product[],float values[],float weight[]){
if(low>=high)
    return;
int i=low;
int j=low-1;
int pivot=high;
float temp;
int temp1;

while(i<=pivot){
    if(ratio[i]>=ratio[pivot]){
        j++;
        temp=ratio[i];
        ratio[i]=ratio[j];
        ratio[j]=temp;

        temp1=product[i];
        product[i]=product[j];
        product[j]=temp1;

        temp=values[i];
        values[i]=values[j];
        values[j]=temp;

        temp=weight[i];
        weight[i]=weight[j];
        weight[j]=temp;

        i++;
    }
    else
        i++;
}

quicksort(ratio,low,j-1,product,values,weight);
quicksort(ratio,j+1,high,product,values,weight);



}
int main(){
int n;

printf("Enter number of products: ");
scanf("%d",&n);

int product[n];
float weight[n];
float values[n];
float ratio[n];

float capacity;
printf("Enter capacity: ");
scanf("%f",&capacity);

//product numbers
for(int i=0;i<n;i++){
    product[i]=i+1;
}

printf("Enter weight of the products: ");
for(int i=0;i<n;i++){
 scanf("%f",&weight[i]);
}

printf("Enter values of the products: ");
for(int i=0;i<n;i++){
 scanf("%f",&values[i]);
}

//Ratio
for(int i=0;i<n;i++){
 ratio[i]=values[i]/weight[i];
}

quicksort(ratio,0,n-1,product,values,weight);

float profit=0;

printf("Picked products: ");

for(int i=0;i<n;i++){
    if(weight[i]<=capacity){
        profit=profit+values[i];
        capacity=capacity-weight[i];
        printf("%d ",product[i]);
    }
    else {
       profit=profit+capacity*ratio[i];
       printf("%d ",product[i]);
       break;
    }
}

printf("\nTotal profit: %.2f",profit);



return 0;
}
