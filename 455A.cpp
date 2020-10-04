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
#define int long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

 main()
{
	int n;
	cin >> n;
	int a[n+5];
	map<int,int>mp;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	long long f[100005]={0};
	f[0]=0;
	f[1]=mp[1];
	for (int i = 2; i <= 1e5; ++i)
	{
		f[i]=max(f[i-1],f[i-2]+mp[i]*i*1LL);	
	}
	cout << f[100000] << endl;
}