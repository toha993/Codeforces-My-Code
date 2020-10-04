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


int main()
{
	int n,m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	long long ans[n+5]={0};
	long long final[n+5]={0};
	for (int i = 1; i <= n; ++i)
	{
		ans[i]=ans[i-1]+a[i-1];
	}
	vector<long long>v;
	for (int i = 1; i <=n; ++i)
	{
		final[i]=final[max(i-m,0)]+ans[i];
		cout << final[i] << endl;
	}


}