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
//solven
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int a[100005];
//vector<pair<int,int>>v;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i]>=0)
		{
			a[i]= -a[i]-1;
		}
	}
	if(n&1)
		{
			int mx=-1,cng=-1;
			for (int i = 0; i <n; ++i)
			{
				if(abs(a[i])>mx)
				{
					mx=abs(a[i]);
					cng=i;
				}
			}
				a[cng]= -a[cng]-1;
		}
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}