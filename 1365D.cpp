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

char a[55][55];
int flag=0;
int n,m;
int visited[55][55];
void lock(int x,int y)
{
	if(x+1 !=n)
		{
			if(a[x+1][y]=='.')
					{
						a[x+1][y]='#';
					}
					else if(a[x+1][y]=='G')
					{
						flag=1;
					}
		}
	if(y+1 !=m)
	{
		if(a[x][y+1]=='.')
		{
			a[x][y+1]='#';
		}
		else if(a[x][y+1]=='G')
		{
			flag=1;
		}
	}
	if(x-1 >=0)
	{
		if(a[x-1][y]=='.')
		{
			a[x-1][y]='#';
		}
		else if(a[x-1][y]=='G')
		{
			flag=1;
		}
	}
	if(y-1>=0)
	{
		if(a[x][y-1]=='.')
		{
			a[x][y-1]='#';
		}
		else if(a[x][y-1]=='G')
		{
			flag=1;
		}
	}
}
int val;
// int dfs(int x,int y)
// {
// 	//cout << x << " " << y << endl;
// 	if(visited[x][y] || a[x][y]=='#' || a[x][y]=='B' || x==n || y==m || x<0 || y < 0)
// 	{
// 		return 1;
// 	}
// 	if(x==n-1 && y==m-1)
// 	{
// 		val=1;
// 		return 1;
// 	}
// 	visited[x][y]=1;
// 	dfs(x+1,y);
// 	dfs(x-1,y);
// 	dfs(x,y+1);
// 	dfs(x,y-1);
// 	return val;
// }
vector<int>xd;
void dfs(int x,int y)
{
	//cout << x << " " << y << endl;
	if(visited[x][y] || a[x][y]=='#' || a[x][y]=='B' || x==n || y==m || x<0 || y < 0)
	{
		return;
	}
	if(a[x][y]=='G')
	{
		xd.push_back(1);
	}
	visited[x][y]=1;
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		xd.clear();
		vector<pair<int,int>>bad,good;
		flag=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin >> a[i][j];
				//cout << a[i][j] << endl;
				if(a[i][j]=='B')
					bad.push_back({i,j});
				else if(a[i][j]=='G')
					good.push_back({i,j});
			}
		}
		for (int i = 0; i < bad.size(); ++i)
		{
			//cout << bad[i].first << " " << bad[i].second << endl;
			lock(bad[i].first,bad[i].second);
			if(flag)
			{
				cout << "No" << endl;
				break;
			}
		}
		if(flag)
		{
			continue;
		}
		memset(visited,0,sizeof(visited));
		dfs(n-1,m-1);
		if(xd.size() != good.size())
		{
			cout <<"No" << endl;
		}
		else
			cout << "Yes" << endl;
	}
}