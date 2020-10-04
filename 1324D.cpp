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
	int n;
	cin >> n;
	int a[n],b[n];	
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		v.push_back(a[i]-b[i]);
	}
	sort(v.begin(),v.end());
	long long ans=0;
	for (int i = 0; i <v.size(); ++i)
	{
		int x=v[i];
		int src=1-x;
		//cout << src << " ";
		int p=upper_bound(v.begin(),v.end(),src-1)-v.begin();
		//int xd=find(v.begin(),v.end(),x)-v.begin();
		ans +=(v.size()-p);
		if(x>=src)
			ans--;
		//	v.erase(v.begin()+xd);
		//cout << ans << endl;
	}
	cout << ans/2 << endl;
}