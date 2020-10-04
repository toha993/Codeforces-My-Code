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
	int a[105]={0};
	int n,mx=0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mx=max(a[i],mx);
	}
	for (int i = 0; i < n-1; ++i)
	{
		int gg=a[i];
		for (int j = i+1; j < n; ++j)
		{
			gg=gg^a[j];
			//cout << gg << endl;
			mx=max(gg,mx);
		}
	}
	cout << mx << endl;
}