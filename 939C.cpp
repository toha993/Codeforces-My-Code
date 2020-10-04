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
	vector<int>v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	v.insert(v.end(),v.begin(),v.end());
	int pref[2*n+1];
	pref[0]=0;
	for (int i = 1; i <= 2*n; ++i)
	{
		if(i!=0)
		{
			pref[i]=pref[i-1]+v[i-1];
		}
		else
			pref[i]=v[i];
		//cout << pref[i] << " ";
	}
	int s,f;
	cin >> s >> f;
	s--;
	f--;
	int mx=0,time;
	//cout << endl;
	for (int i=0;i<=n;++i)
	{
		//cout << n+f-i << " " << n+s-i << " ";
		if(pref[n+f-i]-pref[n+s-i]>mx)
		{
			time=i+1;
			mx=pref[n+f-i]-pref[n+s-i];
			//cout << mx <<endl;
		}
	}
	cout << time << endl;
}