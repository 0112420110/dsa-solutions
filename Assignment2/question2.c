#include<stdio.h>

void DFS(int vertex, int graph[vertex][vertex], int source, int visited[])
{
    visited[source] = 1;
    for(int i = 0; i < vertex; i++)
    {
        if(graph[source][i] == 1 && visited[i] == 0)
        {
            DFS(vertex, graph, i, visited);
        }
    }
}

int main()
{
    int vertex, edge, u, v, source, destination;

    printf("n = ");
    scanf("%d", &vertex);
    printf("edges = ");
    scanf("%d",&edge);

    int graph[vertex][vertex];
    for(int i = 0; i < vertex; i++)
    {
        for(int j = 0; j < vertex; j++)
        {
            graph[i][j] = 0;
        }
    }

    for(int i = 0; i < edge; i++)
    {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    printf("source = ");
    scanf("%d", &source);
    printf("destination = ");
    scanf("%d",&destination);

    int visited[vertex];
    for(int i = 0; i < vertex; i++)
    {
        visited[i] = 0;
    }

    DFS(vertex, graph, source, visited);

    printf("\n\nOutput:\n");

    if(visited[destination] == 1)
        printf("true");

    else
        printf("false");

        printf("\n\n\n");

    return 0;
}
