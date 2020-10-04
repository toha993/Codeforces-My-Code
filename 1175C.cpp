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
//editorial
int a[200005];
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		int dis=1e9,mn=0;
		for (int i = 0; i <n-k ; ++i)
		{
			int xd=a[i+k]-a[i];
			//xd /=2;
			if(xd<dis)
			{
				dis=xd;
				mn=a[i+k]+a[i];
				mn /=2;
			}
		}
		cout << mn << endl;

	}
}