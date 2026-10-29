//Let the graph connected.
//If the graph not connected,then it is not possible to
//reach all vertex from starting vertex
//So, if you want, you can check 1st the graph is connected or not

//For undirected graph====
#include<stdio.h>
void shortestPath(int vertex,int graph[vertex][vertex],int distance[],int start)
{
    int queue[vertex];
    int front=0,rear=-1,current;
    distance[start]=0;
    rear++;
    queue[rear]=start;
    while(front<=rear)
    {
        current=queue[front];
        front++;
        for(int i=0; i<vertex; i++)
        {
            if(graph[current][i]==1 && distance[i]==-1)
            {
                distance[i]=distance[current]+1;
                rear++;
                queue[rear]=i;
            }
        }
    }
    printf("Shortest path from %d: ",start);
    for(int i=0; i<vertex; i++)
    {
        printf("%d ",distance[i]);
    }
}
int main()
{
    int vertex,edge,u,v;
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

    int distance[vertex];
    for(int i=0; i<vertex; i++)
    {
        distance[i]=-1;
    }

    int start;
    printf("Enter starting vertex: ");
    scanf("%d",&start);

    shortestPath(vertex,graph,distance,start);


    return 0;
}


//For directed graph
#include<stdio.h>
void shortestPath(int vertex,int graph[vertex][vertex],int distance[],int start)
{
    int queue[vertex];
    int front=0,rear=-1,current;
    distance[start]=0;
    rear++;
    queue[rear]=start;
    while(front<=rear)
    {
        current=queue[front];
        front++;
        for(int i=0; i<vertex; i++)
        {
            if(graph[current][i]==1 && distance[i]==-1)
            {
                distance[i]=distance[current]+1;
                rear++;
                queue[rear]=i;
            }
        }
    }
    printf("Shortest path from %d: ",start);
    for(int i=0; i<vertex; i++)
    {
        printf("%d ",distance[i]);
    }
}
int main()
{
    int vertex,edge,u,v;
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
        graph[u][v]=1; //directed graph


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

    int distance[vertex];
    for(int i=0; i<vertex; i++)
    {
        distance[i]=-1;
    }

    int start;
    printf("Enter starting vertex: ");
    scanf("%d",&start);

    shortestPath(vertex,graph,distance,start);


    return 0;
}
