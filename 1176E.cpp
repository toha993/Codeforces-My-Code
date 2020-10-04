#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;
vector<int>path[200005];
vector<int>v;
int visited[200005];
int dis[200005];
int last=0;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void bfs(int n)
{
	queue<int>q;
	dis[n]=last+1;
	visited[n]=1;
	q.push(n);
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for (int i = 0; i < path[u].size(); ++i)
		{
			int v=path[u][i];
			if(!visited[v])
			{
				dis[v]=dis[u]+1;
				last=max(last,dis[v]);
				visited[v]=1;
				q.push(v);
			}
		}

	}
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int p,q,mx=0,dbo=0;
		cin >> p >> q;
		for (int i = 0; i < q; ++i)
		{ 
			int x,y;
			cin >> x >> y;
			path[x].push_back(y);
			path[y].push_back(x);
			if(path[x].size()>mx)
			{
				mx=path[x].size();
				dbo=x;
			}
			else if(path[x].size()>mx)
			{
				mx=path[y].size();
				dbo=y;
			}
		}
		memset(dis,0,sizeof(dis));
		memset(visited,0,sizeof(visited));
		bfs(dbo);
		for (int i = 1; i <= p; ++i)
		{
			if(dis[i]==0)
			{
				bfs(i);
			}
		}
		for (int i = 1; i <=p ; ++i)
		{
			if(dis[i]%2==1)
			{
				v.push_back(i);
			}
		}
		cout << v.size() << endl;
		for (int i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		v.clear();
		for (int i = 1; i <= p; ++i)
		{
			path[i].clear();
		}
	}

}