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
#define ll long long
#define int long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int mod=(1e9+7);
int mat(int base,int power)
{
	if(power==0)
		return 1;
	int ret=mat(base,power/2);
	//ret *=mod;
	ret *=ret;
	ret %=mod;
	if(power%2==0)
	{
		return ret;
	}
	else
	{
		return (ret*(base%mod))%mod;
	}
}
main()
{
	int n,m;
	cin >> n >> m;
	if(m==1)
	{
		cout << 1 << endl;
		exit(0);
	}
	ll ans=1;
		int xd=mat(2,m);
		xd=mat(xd-1,n);
		cout << xd << endl;
}