#include<stdio.h>
void DFS(int i,int j,int row,int col,int grid[row][col]){
if(i<0 || i>=row || j<0 || j>=col ){
    return;
}
if(grid[i][j]==0){   //water or already visited
    return;
}
grid[i][j]=0;

DFS(i-1,j,row,col,grid); //up
DFS(i+1,j,row,col,grid); //down
DFS(i,j-1,row,col,grid); //left
DFS(i,j+1,row,col,grid); //right

}
int main(){
    int row,col,count=0;
    printf("Enter number of rows and coloums: ");
    scanf("%d %d",&row,&col);
    int grid[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&grid[i][j]);
        }
    }



    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          if(grid[i][j]==1){
            count++;
            DFS(i,j,row,col,grid);
          }
        }
    }
    printf("Number of islands: %d",count);
return 0;
}
