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
		int flag[n+5]={0};
		int final[n+5];
		int ck=1;
		for (int i = 0; i <n; ++i)
		{
			int x;
			cin >> a[i];
		}
		final[0]=a[0];
		flag[a[0]]=1;
		int hbena=0;
		for (int i = 1; i <n ; ++i)
		{
			if(a[i]>a[i-1])
			{
				final[i]=a[i];
				flag[a[i]]=1;
			}
			else if(a[i]<a[i-1])
			{
				hbena=1;
				break;
			}
			else if(a[i]==a[i-1])
			{
				while(flag[ck]==1)
					ck++;
				if(ck<a[i])
				{
					final[i]=ck;
					flag[ck]=1;
					ck++;
				}
				else
					{
						hbena=1;
						break;
					}
			}
		}
		if(hbena)
		{
			cout << -1;
		}
		else
			for (int i = 0; i < n; ++i)
			{
				cout << final[i] << " ";
			}
			cout << endl;
	}
}