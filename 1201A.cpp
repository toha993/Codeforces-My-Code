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

int mx[10000+1];
string a[1000+5];
int main()
{
	int n,k;
	cin >> n >> k;
	map<char,int>mp;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j <n ; ++j)
		{
			mp[a[j][i]]++;
			mx[i]=max(mx[i],mp[a[j][i]]);
		}
		mp.clear();
	}
	long long ans=0;
	for (int i = 0; i < k; ++i)
	{
		int x;
		cin >> x;
		//cout << mx[i] << endl;
		ans +=(x*mx[i]);
	}
	cout << ans << endl;
}