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
	long long n;
	cin >> n;
	//cout << sqrt(n) << endl;
	long long mn=1e18;
	long long a,b;
	if(n==1)
	{
		cout << 1 << " " << 1 << endl;
		exit(0);
	}
	for (long long i = 1;i*i<=n; ++i)
	{
		if(n%i!=0)
			continue;
		//cout << i << " " << n/i << endl;
		if(__gcd(max(i,n/i),min(i,n/i))!=1)
			continue;
		long long man=max(i,n/i);
		if(mn>man)
		{
			a=i;
			b=n/i;
			mn=man;
		}
	}
	if(a>b)
		swap(a,b);
	cout << a << " " << b << endl;
}