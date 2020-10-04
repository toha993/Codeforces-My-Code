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
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	ll n,m;
	vector<ll>v;
	cin >> n >> m;
	for (ll i = 1; i<=sqrt(n); ++i)
	{
		if(n%i==0)
		{
			if(n/i==i)
				v.push_back(i);
			else
			{
				v.push_back(i),v.push_back(n/i);
			}
		}
	}
	sort(v.begin(),v.end());
	if(m>v.size())
	{
		cout <<-1 << endl;
		exit(0);
	}
	cout << v[m-1] << endl;
}