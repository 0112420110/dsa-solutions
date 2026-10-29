//for connected graph
#include<stdio.h>
int isBipartite(int vertex,int graph[vertex][vertex],int color[],int start)
{
    int queue[vertex];
    int front=0, rear=-1,current;
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
                //if no color
                if(color[i]==0)
                {
                    color[i]=-color[current];
                    rear++;
                    queue[rear]=i;
                }
                //same color
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
    int vertex;
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
    int color[vertex];
    for(int i=0; i<vertex; i++)
    {
        color[i]=0;
    }
    int bipartite=isBipartite(vertex,graph,color,0);
    if(bipartite==0)
        printf("The graph is not bipartite.");
    else
        printf("The graph is bipartite.");
    return 0;
}
//break works only for one(nearest loop)loop
//return stops the programm immediately


//for disconnected graph====
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
    int vertex,bipartite;
    printf("Enter number of vertex: ");
    scanf("%d",&vertex);
    int graph[vertex][vertex];
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++) {
        scanf("%d",&graph[i][j]);
    }}
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
