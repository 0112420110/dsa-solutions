#include<stdio.h>

void insert(int hashTable[],int key,int size){
int index=key%size;

while(hashTable[index]!=-1){
    index=(index+1)%size;
}
hashTable[index]=key;
}

void display(int hashTable[],int size){
for(int i=0;i<size;i++)
{
    if(hashTable[i]==-1)
    {
        printf("Index %d : Empty\n",i);
    }
    else
    {
        printf("Index %d : %d\n",i,hashTable[i]);
    }
}
}

int main(){
    int size;
    printf("Enter hash table size: ");
    scanf("%d",&size);
int hashTable[size];

for(int i=0;i<size;i++){
    hashTable[i]=-1;
}

int n;
printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter elements: \n");

int k=0;

for(int i=0;i<n;i++){
    int key;

    scanf("%d",&key);


    if(k>=size)
    {
        break;
    }

    insert(hashTable,key,size);
    k++;

}

display(hashTable,size);
return 0;
}
