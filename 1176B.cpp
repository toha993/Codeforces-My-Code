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
#define int long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int p;
		cin >> p;
		int a[100];
		int c[5]={0};
		for (int i = 0; i < p; ++i)
		{
			cin >> a[i];
			//sum +=a[i];
			c[a[i]%3]++;
		}
		int ans=c[0];
		if(c[1] < c[2])
		{
			ans +=c[1];
			c[2] -=c[1];
			ans += (c[2])/3;
		}
		else
		{
			ans +=c[2];
			c[1] -=c[2];
			ans +=c[1]/3;

		}
		cout << ans << endl;
		// << ans+min(c[1],c[2])+(<< endl;
		
	}

	return 0;
}