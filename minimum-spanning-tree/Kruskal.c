/*#include<stdio.h>
void quicksort(int u[],int v[],int weight[],int low,int high){
if(low>=high){
    return;
}
int i=low;
int j=low-1;
int pivot=high;
int temp;
while(i<=pivot){
    if(weight[i]<=weight[pivot]){
        j++;
        temp=weight[i];
        weight[i]=weight[j];
        weight[j]=temp;

        temp=u[i];
        u[i]=u[j];
        u[j]=temp;

        temp=v[i];
        v[i]=v[j];
        v[j]=temp;

        i++;
    }
    else
        i++;
}

quicksort(u,v,weight,low,j-1);
quicksort(u,v,weight,j+1,high);
}

int find(int parent[],int child){
if(parent[child]==child){
    return child;
}
else{
    int parentOfChild=find(parent,parent[child]);
    return parentOfChild;

}
}
void kruskal(int u[],int v[],int weight[],int edge,int vertex){
int parent[vertex];

for(int i=0;i<vertex;i++){
    parent[i]=i;
}

int totalweight=0;
int selectedEdge=0;

printf("Edges in minimum spanning tree:\n");

for(int i=0;i<edge && selectedEdge<vertex-1;i++){
    int rootU=find(parent,u[i]);
    int rootV=find(parent,v[i]);

    if(rootU!=rootV){

        printf("%d --- %d = %d",u[i],v[i],weight[i]);
        totalweight=totalweight+weight[i];
        selectedEdge++;

        parent[rootU]=rootV;
        printf("\n");

    }
}
printf("Minimum cost: %d",totalweight);
}
int main(){
    int vertex,edge;
    printf("Enter number of vertex: ");
    scanf("%d",&vertex);

    printf("Enter number of edge: ");
    scanf("%d",&edge);

    int u[edge],v[edge],weight[edge];

    for(int i=0;i<edge;i++){
        printf("Enter edge %d(u v weight): ",i+1);
        scanf("%d %d %d",&u[i],&v[i],&weight[i]);

    }
    quicksort(u,v,weight,0,edge-1);

    kruskal(u,v,weight,edge,vertex);
return 0;
}
*/
#include<stdio.h>

void quicksort(int u[],int v[],int weight[],int low,int high){
if(low>=high)
    return;
    int i=low;
    int j=low-1;
    int pivot=high;
    int temp;

    while(i<=pivot){
        if(weight[i]<=weight[pivot]){
                j++;
            temp=weight[i];
            weight[i]=weight[j];
            weight[j]=temp;

            temp=u[i];
            u[i]=u[j];
            u[j]=temp;

            temp=v[i];
            v[i]=v[j];
            v[j]=temp;


            i++;

        }

        else
            i++;
    }
    quicksort(u,v,weight,low,j-1);
    quicksort(u,v,weight,j+1,high);
}

int find(int parent[],int baccha){
if(parent[baccha]==baccha)
    return baccha;

    else{
        int parentofbaccha=find(parent,parent[baccha]);
        return parentofbaccha;
    }

}

void kruskal(int u[],int v[],int weight[],int edge,int vertex){
int parent[vertex];

for(int i=0;i<vertex;i++){
    parent[i]=i;
}

int totalweight=0;
int selectededge=0;

printf("Minimum spanning tree: \n");

for(int i=0;i<edge && selectededge<vertex-1;i++ ){
    int root1=find(parent,u[i]);
    int root2=find(parent,v[i]);



    if(root1!=root2){
        printf("%d ---- %d : %d",u[i],v[i],weight[i]);
        totalweight=totalweight+weight[i];
        selectededge++;

        parent[root1]=root2;
        printf("\n");
    }
}
printf("total cost: %d",totalweight);
}
int main(){
    int edge,vertex;
    printf("Enter number of vertex: ");
    scanf("%d",&vertex);

    printf("Enter number of edge: ");
    scanf("%d",&edge);

    int u[edge],v[edge],weight[edge];

    for(int i=0;i<edge;i++){
        printf("Enter edge number %d: ",i+1);
        scanf("%d %d %d",&u[i],&v[i],&weight[i]);

    }
    quicksort(u,v,weight,0,edge-1);
    kruskal(u,v,weight,edge,vertex);
return 0;}
