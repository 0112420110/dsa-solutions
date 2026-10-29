/*//For undirected graph
#include<stdio.h>
void isConnected(int vertex,int graph[vertex][vertex],int visited[],int start)
{
    int queue[vertex];
    int front=0, rear=-1,current;
    visited[start]=1;
    rear++;
    queue[rear]=start;
    while(front<=rear)
    {
        current=queue[front];
        front++;
        for(int i=0; i<vertex; i++)
        {
            if(graph[current][i]==1 && visited[i]==0)
            {
                visited[i]=1;
                rear++;
                queue[rear]=i;
            }
        }
    }
}
int main()
{
    int vertex,start,connected=1;
    printf("Enter number of vertex: ");
    scanf("%d",&vertex);
    int graph[vertex][vertex];

    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }
    printf("Enter starting vertex: ");
    scanf("%d",&start);
    int visited[vertex];
    for(int i=0; i<vertex; i++)
    {
        visited[i]=0;
    }
    isConnected(vertex,graph,visited,start);
    for(int i=0; i<vertex; i++)
    {
        if(visited[i]==0)
        {
            connected=0;
            break;
        }
    }
    if(connected==0)
        printf("The graph is not connected.");
    else
        printf("The graph is connected.");
    return 0;
}
*/



//For directed graph
#include<stdio.h>
void BFS(int vertex,int graph[vertex][vertex],int visited[],int start)
{
    int queue[vertex];
    int front=0,rear=-1,current;
    visited[start]=1;
    rear++;
    queue[rear]=start;
    while(front<=rear)
    {
        current=queue[front];
        front++;
        for(int i=0; i<vertex; i++)
        {
            if(graph[current][i]==1 && visited[i]==0)
            {
                visited[i]=1;
                rear++;
                queue[rear]=i;
            }
        }
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
        graph[u][v]=1;   //directed graph

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

    int visited[vertex];
    for(int i=0; i<vertex; i++)
    {
        visited[i]=0;
    }

    BFS(vertex,graph,visited,0);

    for(int i=0; i<vertex; i++)
    {
        if(visited[i]==0)
        {
            printf("The graph is not strongly connected. ");
            return 0;
        }
    }

    //transpose graph
    int transpose[vertex][vertex];

    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            transpose[i][j]=graph[j][i];
        }
    }
    //Again assign value for visited array
    for(int i=0; i<vertex; i++)
    {
        visited[i]=0;
    }

    BFS(vertex,transpose,visited,0);

    for(int i=0; i<vertex; i++)
    {
        if(visited[i]==0)
        {
            printf("The graph is not strongly connected. ");
            return 0;
        }
    }

    printf("The graph is strongly connected. ");


    return 0;
}
