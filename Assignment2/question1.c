#include<stdio.h>

int minFind(int vertex, int graph[vertex][vertex], int selected[], int *min, int *from)
{
    *min = 99999999;
    int minVertex = -1;
    for(int i = 0; i < vertex; i++)
    {
        if(selected[i] == 1)
        {
            for(int j = 0; j < vertex; j++)
            {
                if(selected[j] == 0 && graph[i][j] != 0)
                {
                    if(graph[i][j] < *min)
                    {
                        *min = graph[i][j];
                        minVertex = j;
                        *from = i;
                    }
                }
            }
        }
    }
    return minVertex;
}

void prim(int vertex, int graph[vertex][vertex])
{
    int selected[vertex];
    for(int i = 0; i < vertex; i++)
    {
        selected[i] = 0;
    }
    selected[0] = 1;

    int u[vertex], v[vertex], w[vertex];
    int count = 0;

    for(int i = 0; i < vertex - 1; i++)
    {
        int min, from;
        int next = minFind(vertex, graph, selected, &min, &from);
        if(next == -1) break;

        selected[next] = 1;

        if(from < next)
        {
            u[count] = from + 1;
            v[count] = next + 1;
        }
        else
        {
            u[count] = next + 1;
            v[count] = from + 1;
        }
        w[count] = min;
        count++;
    }


    for(int i = 0; i < count - 1; i++)
    {
        for(int j = 0; j < count - 1 - i; j++)
        {
            if(u[j] > u[j+1] || (u[j] == u[j+1] && v[j] > v[j+1]))
            {
                int t;
                t = u[j]; u[j] = u[j+1]; u[j+1] = t;
                t = v[j]; v[j] = v[j+1]; v[j+1] = t;
                t = w[j]; w[j] = w[j+1]; w[j+1] = t;
            }
        }
    }

    printf("Output:\n");

    for(int i = 0; i < count; i++)
    {
        printf("%d %d %d\n", u[i], v[i], w[i]);
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int vertex, edge;
        scanf("%d %d", &vertex, &edge);

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
            int a, b, weight;
            scanf("%d %d %d", &a, &b, &weight);
            graph[a-1][b-1] = weight;
            graph[b-1][a-1] = weight;
        }

        prim(vertex, graph);
    }
    return 0;
}
