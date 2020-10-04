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
	long long n,p,ans;
	cin >> n;
	p=n;
	int ck=0;
	for (long long i = 2; i*i <=n && n > 1; i++)
	{
		if(n%i==0)
		{
			ck++;
			while(n%i==0)
				{
					ans=i;
					n /=i;
				}
		}
	}
	if(n==p)
	{
		cout << n << endl;
	}
	else
	{
		if(ck==1 && n==1)
		{
			cout << ans << endl;
		}
		else
			cout << 1 << endl;
	}
}