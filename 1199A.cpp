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


int main(int argc, char const *argv[])
{
	int n,x,y;
	cin >> n >> x >> y;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		int p=i,flag=0;
		int q=i;
		p--;
		q++;
		for (int j = 0; j < x; ++j)
		{
			if(p<0)
				break;
			if(a[p]<a[i])
			{
				flag=1;
				break;
			}
			p--;
		}
		if(flag)
		{
			continue;
		}
		for (int k = 0; k < y; ++k)
		{
			if(q>=n)
				break;
			if(a[q]<a[i])
			{
				flag=1;
				break;
			}
			q++;
		}
		if(!flag)
		{
			cout << i+1 << endl;
			break;
		}
	}
}