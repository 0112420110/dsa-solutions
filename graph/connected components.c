#include<stdio.h>
void BFS(int vertex,int graph[vertex][vertex],int source,int visited[],int component){
    int queue[vertex];


int front=0,rear=-1;
visited[source]=1;
 rear++;
    queue[rear]=source;

printf("Connected components %d: ",component);
    while(front<=rear){
            int current=queue[front];
    printf("%d ",current);
    front++;

            for(int i=0;i<vertex;i++){
        if(graph[current][i]==1 && visited[i]==0){
            visited[i]=1;
            rear++;
            queue[rear]=i;
        }
    }
    }
    printf("\n");
}
int main(){
    int vertex, edge, u,v;
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
    for(int i=0;i<edge;i++){

        printf("Enter edge number %d: ",i+1);
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
    int component=0;
for(int i=0;i<vertex;i++){
    if(visited[i]==0)
       {component++;
            BFS(vertex,graph,i,visited,component);
       }
}

return 0;
}
