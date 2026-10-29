/*#include<stdio.h>
int findMin(int vertex,int graph[vertex][vertex],int selected[],int *min){
int minVertex=-1;
*min=9999;
for(int i=0;i<vertex;i++){
    if(selected[i]==1){
        for(int j=0;j<vertex;j++){
            if(selected[j]==0 && graph[i][j]!=0){
                if(graph[i][j]<*min){
                    *min=graph[i][j];
                    minVertex=j;
                }
            }
        }
    }
}
return minVertex;
}
void prim(int vertex, int graph[vertex][vertex]){
int selected[vertex];
 for(int i=0;i<vertex;i++){
    selected[i]=0;
 }

 selected[0]=1;

 int total=0;

 for(int edge=0;edge<vertex-1;edge++){
    int min;
    int v=findMin(vertex,graph,selected,&min);

    selected[v]=1;
    total=total+min;
 }
 printf("%d",total);
}
int main(){
    int vertex,edge;

    scanf("%d %d",&vertex,&edge);

    int graph[vertex][vertex];
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            graph[i][j]=0;
        }
    }

    for(int i=0;i<edge;i++){
        int u,v,weight;
        scanf("%d %d %d",&u,&v,&weight);
        graph[u-1][v-1]=weight;
        graph[v-1][u-1]=weight;
    }

    prim(vertex,graph);
return 0;
}
*/
#include<stdio.h>
int minFind(int vertex,int graph[vertex][vertex],int selected[],int *min){
*min=99999;
int minVertex=-1;
for(int i=0;i<vertex;i++){
    if(selected[i]==1){
        for(int j=0;j<vertex;j++){
            if(selected[j]==0 & graph[i][j]!=0){
                if(graph[i][j]<*min){
                    *min=graph[i][j];
                    minVertex=j;
                }
            }
        }
    }
}
return minVertex;
}
void prim(int vertex,int graph[vertex][vertex]){
int selected[vertex];
for(int i=0;i<vertex;i++){
    selected[i]=0;
}
selected[0]=1;
int total=0;

for(int i=0;i<vertex-1;i++){
    int min;
    int v=minFind(vertex,graph,selected,&min);

    selected[v]=1;
    total=total+min;
}
printf("%d",total);
}
int main(){
    int edge,vertex;
    scanf("%d %d",&vertex,&edge);

    int graph[vertex][vertex];

    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            graph[i][j]=0;
        }
    }

    int u,v,weight;
    for(int i=0;i<edge;i++){
        scanf("%d %d %d",&u,&v,&weight);
        graph[u-1][v-1]=weight;
        graph[v-1][u-1]=weight;
    }
    prim(vertex,graph);
return 0;
}
