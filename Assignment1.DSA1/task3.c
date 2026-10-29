#include<stdio.h>
int isBipartite(int vertex,int graph[vertex][vertex],int color[],int start)
{
    int  queue[vertex];
    int front=0;
    int rear=-1;
    int current;
    color[start]=1;
    rear++;
    queue[rear]=start;
    while(front<=rear)
    {
        current=queue[front];
        front++;
        for(int i=0; i<vertex; i++)
        {
            if(graph[current][i]==1)
            {
                if(color[i]==0)
                {
                    color[i]=-color[current];
                    rear++;
                    queue[rear]=i;
                }
                else if (color[i]==color[current])
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}
int main()
{
    int vertex,edge,u,v,bipartite;
    printf("Enter number of vertex: ");
    scanf("%d",&vertex);
    int graph[vertex][vertex];
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            graph[i][j]=0;
        }
    }
    printf("Enter number of edges: ");
    scanf("%d",&edge);
    for(int i=0; i<edge; i++)
    {
        printf("Enter edge number %d: ",i+1);
        scanf("%d %d",&u,&v);
        graph[u][v]=1;
        graph[v][u]=1;
    }
    printf("Adjacency matrix: \n");
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }

    int color[vertex];
    for(int i=0; i<vertex; i++)
    {
        color[i]=0;
    }
    for(int i=0; i<vertex; i++)
    {
        if(color[i]==0)
        {
            bipartite=isBipartite(vertex,graph,color,i);
            if(bipartite==0)
            {
                printf("The graph is not bipartite. ");
                return 0;
            }
        }
    }
    printf("The graph is bipartite.");

    return 0;
}
//0 no color
//1 blue color
//-1 red color
