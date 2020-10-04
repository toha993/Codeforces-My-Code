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


long long  prim[20005],sec[20005],slv[5],a[2005][2005];
vector<pair<int,int>>v(3);
void solve(int  x,int p,int q,long long xd)
{
	//cout << xd << endl;
	if(xd>slv[x])
	{
		slv[x]=xd;
		v[x].first=p;
		v[x].second=q;
	}
}

int main()
{
	cin.sync_with_stdio(false);
	int n;
	cin >> n;
	slv[0]=slv[1]=-1;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <=n; ++j)
		{
			cin >> a[i][j];
			prim[i-j+n] +=a[i][j];
			sec[i+j] +=a[i][j];
		}
	}
	for (int i = 1;i<=n; ++i)
	{
		for (int j = 1; j <=n; ++j)
		{
			//cout << 1 << endl;
			solve((i+j)&1,i,j,prim[i-j+n]+sec[i+j]-a[i][j]);
		}
	}
	cout << slv[0]+slv[1] << endl;
	if(v[0]>v[1])
		swap(v[0],v[1]);
	cout << v[0].first << " " << v[0].second << " " << v[1].first << " " << v[1].second << endl;

}