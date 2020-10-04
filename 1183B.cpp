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
	while(n--)
	{
		int q,k;
		cin >> q >> k;
		int a[q+1];
		for (int i = 0; i <q; ++i)
		{
			cin >> a[i];
		}
		sort(a,a+q);
		int b=a[0]+k;
		int prbena=0;
		for (int i = 1; i < q; ++i)
		{
			if(a[i]<b && a[i]+k>b)
			{
				continue;
			}
			else if(a[i]>b)
			{
				if(a[i]-b > k)
				{
					prbena=1;
					break;
				}
			}
		}
		if(prbena)
			cout << -1 << endl;
		else
			cout << b << endl;
	}
}