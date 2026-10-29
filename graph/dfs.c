#include<stdio.h>
void DFS(int vertex,int graph[vertex][vertex],int source,int visited[]){
visited[source]=1;
for(int i=0;i<vertex;i++){
    if(graph[source][i]==1 && visited[i]==0){
        DFS(vertex,graph,i,visited);
    }

}printf("%d ",source);
}
int main(){
    int vertex,edge,u,v;
    printf("enter number of vertex: ");
    scanf("%d",&vertex);
    int graph[vertex][vertex];
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            graph[i][j]=0;
        }
    }
    printf("Enter number of edges: ");
    scanf("%d",&edge);
    for(int i=0;i<edge;i++){
        printf("enter edge number %d: ",i+1);
        scanf("%d %d",&u,&v);
        graph[u][v]=1;
        graph[v][u]=1;
    }

    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
           printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
    int visited[vertex];
    for(int i=0;i<vertex;i++){
        visited[i]=0;
    }
    printf("DFS Traversal: ");
    for(int i=0;i<vertex;i++){
            if(visited[i]==0)
        DFS(vertex,graph,i,visited);
    }
return 0;
}

//For BFS we use Queue
//For DFS we use Stack/Recursion





//Without handling disconnected graph
#include<stdio.h>
void DFS(int vertex,int graph[vertex][vertex],int source,int visited[]){

visited[source]=1;
for(int i=0;i<vertex;i++){
    if(graph[source][i]==1 && visited[i]==0){
     DFS(vertex,graph,i,visited);
    }
}
printf("%d ",source);
}
int main(){
    int edge,vertex,u,v,source;
    printf("enter number of vertex: ");
    scanf("%d",&vertex);
    int graph[vertex][vertex];
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            graph[i][j]=0;
        }
    }
    printf("enter number of edge: ");
    scanf("%d",&edge);
    for(int i=0;i<edge;i++){
        printf("enter edge number %d: ",i+1);
        scanf("%d %d",&u,&v);
        graph[u][v]=1;
        graph[v][u]=1;
    }
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
           printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
    printf("enter starting vertex: ");
    scanf("%d",&source);
     int visited[vertex];
    for(int i=0;i<vertex;i++)
        {visited[i]=0;
}
    printf("DFS Traversal: ");
    DFS(vertex,graph,source,visited);
return 0;
}
