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
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		int a[n],b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n,greater<>());
		while(k>0)
		{
			k--;
			if(a[0]>b[0])
				break;
			swap(a[0],b[0]);
			sort(a,a+n);
			sort(b,b+n,greater<>());
		}
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			sum +=a[i];
		}
		cout << sum << endl;
	}
}