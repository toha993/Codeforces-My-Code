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
vector<ll>v;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void pathao(ll n)
{
	for (ll i =2; i*i <=n; ++i)
	{
		if(n%i==0)
		{
			v.push_back(i);
			if(i != n/i)
			{
				v.push_back(n/i);
			}
		}
	}
	v.push_back(1);
	if(n!=1)
	{
		v.push_back(n);
	}
	//sort(v.begin(),v.end());
}
ll a[400006];
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	cin >> a[0];
	ll g=a[0];
	for (int i = 1; i < n; ++i)
	{
		cin >> a[i];
		g=__gcd(g,a[i]);
		//mn=min(mn,a[i]);
	}
	//sort(a,a+n);
	pathao(g);
	cout << v.size() << endl;
	
}