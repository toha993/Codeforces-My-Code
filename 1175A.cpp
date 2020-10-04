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
	int t;
	cin >> t;
	while(t--)
	{
		ll m,n;
		cin >> m >> n;
		//dfs(m,n);
		ll ck=0;
		while(m!=0)
		{
			while(m%n==0)
			{
				m /=n;
				ck++;
			}
			ll gg=(m/n)*n;
			ck +=(m-gg);
			m=gg;
			//cout << m << endl;
		}
		cout << ck << endl;
	}
}