#include<stdio.h>
int frequency[100];
int left[100];
int right[100];
char character[100];

int findMinIndex(int usedNode[],int total){
int min=1000000;
int minIndex=-1;

for(int i=0;i<total;i++){
    if(usedNode[i]==0){
        if(min>frequency[i])
        {
            min=frequency[i];
            minIndex=i;
        }
    }
}
return minIndex;
}

void printCodes(int root,char code[],int level ){
if(root==-1)
    return;

    if(left[root]==-1 && right[root]==-1){
        code[level]='\0';

        printf("%c=%s ",character[root],code);
        return;
    }

    //for left portion
    code[level]='0';
    printCodes(left[root],code,level+1);

    //for right portion
    code[level]='1';
    printCodes(right[root],code,level+1);
}

int main(){
    int n;
    int first;
    int second;
    printf("Number of unique character: ");
    scanf("%d",&n);
    printf("characters: ");

    for(int i=0;i<n;i++){
        scanf(" %c",&character[i]);
    }

    printf("frequencies: ");
    for(int i=0;i<n;i++){
        scanf("%d",&frequency[i]);
    }

    //Initially all characters are leaf nodes
    for(int i=0;i<n;i++){
        left[i]=-1;
        right[i]=-1;
    }

    //initially no nodes  are used
    //0 -> unused
    //1 -> used
    int usedNode[100]={0};

    //initially total node = n
    int total=n;

    //after completing huffman tree total nodes will be 2*n-1;
    while(total<2*n-1){
            first=findMinIndex(usedNode,total);
            usedNode[first]=1;

            second=findMinIndex(usedNode,total);
            usedNode[second]=1;

            frequency[total]=frequency[first]+frequency[second];
            left[total]=first;
            right[total]=second;
            total++;
        }

        //last node
        int root=total-1;
        char code[100];

        printf("Huffman Codes: ");

        printCodes(root,code,0);

return 0;
}
