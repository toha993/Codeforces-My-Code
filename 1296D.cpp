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
	long long a,b,k;
	cin >> n >> a >> b >> k;
	int h[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> h[i];
		h[i]= h[i]%(a+b);
		if(h[i]==0)
		{
			h[i]=a+b;
		}
	}
	sort(h,h+n);
	int ck=0;
	for (int i = 0; i < n; ++i)
	{
		int x=h[i];
		if(x!=0 && x<=a)
		{
			ck++;
		}
		else if(k>0)
		{
			if(k*a+a>=x)
				{
					ck++;
					int xd;
					if(x%a)
					 xd=(x+a)/a;
					else
						xd=x/a;
					k -=(xd-1);
				}
		}
		//cout << k << endl;
	}
	cout << ck << endl;

}