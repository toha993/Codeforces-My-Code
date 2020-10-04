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

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
long long dis[100005];
vector<int>path[100005],cost[100005],way[100005];
void dijkstra(int n)
{
	priority_queue<pair<int,int>>pq;
	//visited[n]=1;
	dis[n]=0;
	pq.push({n,0});
	while(!pq.empty())
	{
		int u=pq.top().first;
		//int v=pq.top().second;
		pq.pop();
		for (int i = 0; i <path[u].size(); ++i)
		{
			int xd=path[u][i];
			if(dis[u]+cost[u][i]<dis[xd])
			{
				dis[xd]=dis[u]+cost[u][i];
				//cout << xd << " " << u << endl;
				way[xd].clear();
				way[xd].push_back(u);
				pq.push({xd,dis[xd]});
			}
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin >> n >> m;
	if(m==0)
		cout << -1 << endl,exit(0);
	int dest =n;
	map<int,map<int,int>>mp;
	set<pair<int,int>>st;
	for (int i = 1; i <=n; ++i)
	{
		dis[i]=1e18;
	}
	for (int i = 0; i < m; ++i)
	{
		int u,v,w;
		cin >> u >> v >> w;
		if(mp[u][v]==0)
		{
			mp[u][v]=w;
		}
		else if(mp[u][v]>w)
		{
			mp[u][v]=w;
		}
		st.insert({u,v});
	}
	for (auto i :st)
	{
		path[i.first].push_back(i.second);
		path[i.second].push_back(i.first);
		cost[i.first].push_back(mp[i.first][i.second]);
		cost[i.second].push_back(mp[i.first][i.second]);
	}
	dijkstra(1);
	if(dis[n]==1e18)
	{
		cout << -1 << endl;
	}
	else
		{
			//cout << dis[n] << endl;
			stack<int>bla;
			while(n !=1)
			{
				bla.push(way[n][0]);
				n=way[n][0];
			}
			while(!bla.empty())
			{
				cout << bla.top() << " ";
				bla.pop();
			}
			cout << dest << endl; 
		}

}