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
		if(n==1)
		{
			cout << 0 << endl;
			continue;
		}
		long long ans=0;
		int ck=1;
		for (long long i = 3;i<=n;i +=2)
		{
			ans += (i*i-(i-2)*(i-2))*ck;
			ck++;
		}
		cout << ans << endl;
	}
}