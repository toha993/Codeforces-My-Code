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

int a[200005];
int main()
{
	int n;
	cin >> n;
	ll sum=0;
	map<ll,int>mp;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		sum +=a[i];
		mp[a[i]]++;
	}
	vector<int>v;
	for (int i = 0; i < n; ++i)
	{
		mp[a[i]]--;
		sum -=a[i];
		if(sum%2==0 && mp[sum/2]>=1)
		{
			v.push_back(i+1);
		}
		mp[a[i]]++;
		sum +=a[i];
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}