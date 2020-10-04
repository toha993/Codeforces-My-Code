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
const int mod=1e9+7;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int t,k;
	cin >> t >> k;
	long long a[100005],sum[100005];
	a[0]=1;
	for (int i = 1; i <=100000 ; ++i)
	{
		if(i>=k)
			a[i]=(a[i-1]+a[i-k])%mod;
		else
			a[i]=a[i-1];
	}
	sum[0]=1;
	for (int i = 1; i <=100000; ++i)
	{
		sum[i]=(sum[i-1]+a[i])%mod;
	}
	for (int i = 0; i < t; ++i)
	{
		int a,b;
		cin >> a >> b;
		a--;
		cout << (sum[b]-sum[a]+mod)%mod << endl;
	}
}