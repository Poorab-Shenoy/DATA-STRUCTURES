#include <bits/stdc++.h>
using namespace std;

void BFS(int G[][7],int start, int n)
{
    int i = start; 
    int j;
    queue<int> q;
    int visited[7] = {0};       // we are initialising all the elements in the visited array as 0
    cout << i;
    visited[i] =1;
    q.push(i); 
    while(!q.empty())
    {
        i  = q.front();                        // here i is used for getting the next row. at first i will be 1 ,j keeps on changing
                                              // so it will scan the first row completely   
        q.pop();
        for(j = 1; j<n; j++)
        {
            if(G[i][j]==1 && visited[j] == 0)
            {
                cout << j;
                visited[j] = 1;
                q.push(j);
            }
        }
    }
}
void DFS(int G[][7], int start, int n)
{
    static int visited[7] ={0};
    if(visited[start]==0)                          //DFS suspends the vertex that is printed first and explores the other vertex 
                                                 // lastly it comes to the vertex which is yet to be completed and completes it
    {
        cout << start;
        visited[start] =1;  // after visiting each node we should mark it as visited
        for(int j=1; j<n; j++)
        {
            if(G[start][j] == 1 && visited[j]==0)
            {
                DFS(G,j,n);
            }
        }
    }
}
int main()
{
   int G[7][7] = { {0,0,0,0,0,0,0},{0,0,1,1,0,0,0},{0,1,0,0,1,0,0},{0,1,0,0,1,0,0},{0,0,1,1,0,1,1},{0,0,0,0,1,0,0},{0,0,0,0,1,0,0}};
      // in the first row and coloum all the elements are 0 since we are starting from indext 1 and [r][c] represents if it have an edge or not
     // BFS(G,4,7);        // starting vertex and dimension is passed
      DFS(G,1,7);
}
