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
	int arr[n+5];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int m;
	cin >> m;
	int chng[200000+5]={0};
	int hbe[200000+5]={0};
	//vector<pair<int,int>> q[n+5];
	for (int i = 0; i < m; ++i)
	{
		int x;
		cin >> x;
		if(x==1)
		{
			int gg,mu;
			cin >> gg >> mu;
			gg--;
			arr[gg]=mu;
			chng[gg]=i;
		}
		else
		{
			int xd;
			cin >> xd;
			hbe[i]=xd;
			//last=i;
		}
	}
	for (int i = m-1; i>=0; --i)
	{
		if(hbe[i]<hbe[i+1])
		{
			hbe[i]=hbe[i+1];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(hbe[chng[i]]>arr[i])
		{
			arr[i]=hbe[chng[i]];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}