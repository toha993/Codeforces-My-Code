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
		int n;
		cin >> n;
		int a[n+5];
		int taken[n+2][n+2]={0};
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		int ck=0;
		while(ck<n-1)
		{
			int flag=0;
			for (int i = n-1; i>=1; --i)
			{
				if(a[i]<a[i-1] && taken[i][i-1]==0)
				{
					flag=1;
					swap(a[i],a[i-1]);
					taken[i][i-1]=1;
					ck++;
				}
			}
			if(!flag)
				break;
		}
		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}