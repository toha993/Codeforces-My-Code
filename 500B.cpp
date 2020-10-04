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
//solven

int a[305];
char grid[305][305];
int vis[305][305]={0};
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int i = 1; i <=n ; ++i)
	{
		cin >> a[i];
	}
	int ck=0;
	for (int i = 1; i <=n ; ++i)
	{
		for (int j = 1; j <=n; ++j)
		{
			cin >> grid[i][j];
			grid[i][i]='0';	
			// if(grid[i][j]=='1')
			// 	ck++;
		}
	}
	for(int k=1;k<=n;k++)
	{
		for (int i = 1; i <=n ; ++i)
		{
			for (int j = 1; j <=n; ++j)
			{
				//cout << grid[i][j] << endl;
				if(grid[i][k]=='1'&& grid[k][j]=='1')
				{
					grid[i][j]='1';
				}	
			}
		}
	}
	for (int i =1;i<=n; ++i)
	{
		int bla=i;
		for (int j = i+1; j <=n; ++j)
		{
			if(grid[i][j]=='1' && a[j]<a[bla])
				bla=j;
		}
		swap(a[bla],a[i]);
	}
	for (int i = 1; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout <<a[n] << endl;
}