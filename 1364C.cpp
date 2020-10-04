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
//solve

int main()
{
	int n;
	cin >> n;
	int a[n],b[n];
	memset(b,-1,sizeof(b));
	int mx=-1;
	map<int,int>mp;
	vector<int>st;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(i && a[i] !=a[i-1])
		{
			b[i]=a[i-1];
			mp[b[i]]=1;
		}
	}
	mp[a[n-1]]=1;
	int ck=0;
	for (int i = 0; i < n; ++i)
	{
		while(mp[ck])
			ck++;
		if(b[i]==-1)
		{
			b[i]=ck;
			mp[ck]=1;
		}
		cout << b[i] << " ";
	}
	cout << endl;
	
}