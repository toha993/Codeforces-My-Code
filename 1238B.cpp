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


int main ()
{
	int q;
	cin >> q;
	while(q--)
	{
		int n,m;
		cin >> n >> m;
		int a[n];
		map<int,int>mp;
		int ck=0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			if(mp[x]==0)
			{
				a[ck++]=x;
			}
			mp[x]=1;
		}
		sort(a,a+ck,greater<>());
		int cp=0;
		for (int i = 0; i < ck; ++i)
		{
			if(a[i]-cp*m<=0)
				break;
			else
				cp++;
		}
		cout << cp << endl;

	}
}