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
//solve

vector<int>path[200005];
long long cost[200005],tot[200005];
long long final=0;
int dfs(int init,int fin,long long cos)
{
	cos=min(cost[init],cos);
	int pos=0,neg=0;
	if(tot[init]==1)
		pos++;
	else if(tot[init]==-1)
		neg++;
	for (auto i : path[init])
	{
		if(i==fin)
			continue;
		int xp=dfs(i,init,cos);
		if(xp>0)
			pos +=xp;
		else
			neg +=-xp;
	}
	final +=2ll*cos*min(pos,neg);
	return pos-neg;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		int b,c;
		cin >> cost[i] >> b>> c;
		tot[i]=b-c;
	}
	for (int i = 0; i < n-1; ++i)
	{
		int x,y;
		cin >> x >> y;
		path[x].push_back(y);
		path[y].push_back(x);
	}
	int x=dfs(1,0,1e15);
	if(x)
	{
		cout << -1 << endl;
	}
	else
		cout << final << endl;
}