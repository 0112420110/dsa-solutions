#include<stdio.h>
int main(){
    int vertex, edge,u,v;
    printf("Enter number of vertex: ");
    scanf("%d",&vertex);
    int graph[vertex][vertex];
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            graph[i][j]=0;
        }
    }
    printf("Enter number of edges: ");
    scanf("%d",&edge);
    printf("\n");
for(int i=0;i<edge;i++){
    printf("Enter edge number %d: ",i+1);
    scanf("%d %d",&u,&v);
    graph[u][v]=1;
   graph[v][u]=1;  //undirected graph

}

printf("\nAdjacency matrix for directed graph: \n");
for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
return 0;
}
