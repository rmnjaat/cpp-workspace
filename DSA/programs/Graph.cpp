#include <bits/stdc++.h>
using namespace std;

// dfs
void print(int **edges, int n, int sv, bool *visited)
{
    cout << sv << endl;
    visited[sv] = true;
    for (int i = 0; i < n; i++)
    {
        if (i == sv)
        {
            continue;
        }
        
        if (edges[sv][i] == 1)
        {
            if (visited[i])
            {
                continue;
            }
            print(edges, n, i, visited);
        }
    }
}

// bfs

void bfs(int **edges, int n, int sv, bool visited[])
{
    queue<int> pendingVerticies;
    pendingVerticies.push(sv);
    visited[sv] = true;
    while (!pendingVerticies.empty())
    {
        int curr = pendingVerticies.front();
        cout << curr << endl;
        for (int i = 0; i < n; i++)
        {

            if (i == curr)
                continue;

            if (edges[curr][i] && !visited[i])
            {
                pendingVerticies.push(i);
                visited[i] = true;
            }
        }
        pendingVerticies.pop();
    }
}

// for disconnected
void BFS(int **edges, int n)
{
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(edges, n, i, visited);
        }
    }

    delete[] visited;
}
// for disconnected
void DFS(int **edges, int n)
{
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            print(edges, n, i, visited);
        }
    }

    delete[] visited;
}

// hash path

int main()
{

    int n;
    int e;
    cin >> n >> e;
    int **edges = new int *[n];

    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;

        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    // print(edges,n,0,visited);

    BFS(edges, n);

    cout << "--------------------" << endl;
    DFS(edges, n);

    delete[] visited;
    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
    }
}