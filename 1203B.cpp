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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int n;
		cin >> n;
		ll a[4*n+5];
		for (int i = 0; i < 4*n; ++i)
		{
			cin >> a[i];
		}
		sort(a,a+(4*n));
		// for (int i = 0; i < 4*n; ++i)
		// {
		// 	cout << a[i] << " ";
		// }
		//cout << endl;
		int flag=0;
		ll mx=a[0]*a[(4*n)-1];
		//cout << mx << endl;
		map<int,int>mp;
		//mp[a[0]]++;
		//mp[a[(4*n)-1]]++;
		for (int i = 0; i < 2*n;i +=2)
		{
			if((a[i]*a[(4*n)-i-1]) != mx)
			{
				//cout << a[i] << " " << a[4*n-i-1] << " " << (a[i]*a[(4*n)-i-1]) << endl;
				flag=1;
				cout << "NO" << endl;
				break;
			}
			// mp[a[i]]++;
			// mp[a[(4*n)-i-1]]++;
		}
		// if(!flag)
		// for (auto x:mp)
		// {
		// 	if(x.second & 1)
		// 	{
		// 		cout << x.first << endl;
		// 		cout<< "NO" << endl;
		// 		flag=1;
		// 		break;
		// 	}
		// }

		if(!flag)
		for (int i = 0; i < 4*n; i +=2)
		{
			if(a[i] != a[i+1])
				{
					flag=1;
					cout << "NO" << endl;
				break;
				}
		}
		if(!flag)
		{
			cout << "YES" << endl;
		}
	}
}