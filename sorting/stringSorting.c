/*#include<stdio.h>
#include<string.h>


void sorting_string(char arr[][100], int m){
int i,j,minIn;
char temp[100];
for(i=0;i<m-1;i++){
    minIn=i;
    for(j=i+1;j<m;j++){
        if(strlen(arr[j])<strlen(arr[minIn]))
        {
            minIn=j;
        }
    }
    if(minIn!=i)
   {
        strcpy(temp,arr[i]);
        strcpy(arr[i],arr[minIn]);
        strcpy(arr[minIn],temp);
   }
}
}
int main(){
    int m,n;
    scanf("%d",&m);
    char arr[m][100];
    for(int i=0;i<m;i++){

            scanf("%s",arr[i]);}
            //print array before sorting
           // for(int i=0;i<m;i++){
               // printf("%s ",arr[i]);
            //}
   sorting_string(arr,m);
printf("\n");
    //print array after sorting
            for(int i=0;i<m;i++){
                printf("%s ",arr[i]);
            }
return 0;
}*/
#include<stdio.h>
#include<string.h>
void sorting_string(char arr[][100],int n){
    int i,j,minIn;
    char temp[100];
    for(i=0;i<n-1;i++){
        minIn=i;
        for(j=i+1;j<n;j++){
            if(strlen(arr[j])<strlen(arr[minIn])){
                minIn=j;
            }
        }
        if(minIn!=i){
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[minIn]);
            strcpy(arr[minIn],temp);
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    char arr[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    sorting_string(arr,n);
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
return 0;}
