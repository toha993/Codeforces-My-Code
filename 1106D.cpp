#include<bits/stdc++.h>
using namespace std;
vector<int>path[100005];
bool visited[100005];
int hoise[100005];
void bfs(int n)
{
    priority_queue<int,vector<int>,greater<int>>q;
    int p=0;
    memset(visited,false,sizeof(visited));
    q.push(n);
    visited[n]=true;
    while(!q.empty())
    {
        int u =q.top();
        hoise[p++]=u;
        q.pop();
        for(int i=0;i<path[u].size();i++)
        {
            int v=path[u][i];
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }

    }
}
int main()
{
    int u,v;
    cin >> u >> v;
    while(v--)
    {
        int a,b;
        cin >> a >> b;
        path[a].push_back(b);
        path[b].push_back(a);
    }

    for(int i=1;i<=v;i++)
    {
        sort(path[i].begin(),path[i].end());

    }
    bfs(1);

    for(int i=0;i<u;i++)
    {
        cout << hoise[i] << " ";
    }
    cout << endl;
}