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
