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
		int n,m;
		cin >> n >> m;
		int a[n]={0};
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			//sum +=a[i];
		}
		int bad=0;
		for (int i = 0; i <n; ++i)
		{
			if(a[i]>a[bad])
			{
				bad=i;
			}
			m -=a[i];
			if(m<0)
				break;
		}
		//cout << m << endl;
		if(m>=0)
		{
			cout << 0 << endl;
		}
		else
			cout << bad+1 << endl;

	}
}