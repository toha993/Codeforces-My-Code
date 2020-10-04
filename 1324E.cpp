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
int n,h,l,r;
int dp[2005][2005];
int a[2005];
int sleep(int p,int xd)
{
	if(p==n)
		return 0;
	if(dp[p][xd]!=-1)
	{
		return dp[p][xd];
	}
	int res1=sleep(p+1,(xd+a[p])%h)+(l<=((xd+a[p])%h) && r>=((xd+a[p])%h));
	int res2=sleep(p+1,((xd+a[p]-1)%h))+(l<=(((xd+a[p])-1)%h) && r>=(((xd+a[p])-1)%h));
	return dp[p][xd]=max(res1,res2);
}
int main()
{
	
	cin >> n >> h >> l >> r;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	memset(dp,-1,sizeof(dp));
	
	cout << sleep(0,0) << endl;
	
}