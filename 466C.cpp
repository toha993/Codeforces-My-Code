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


//solve


int a[500005],cnt[500005];
int main()
{
	int n;
	cin >> n;
	long long sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		sum +=a[i];
	}
	if(sum%3)
	{
		cout << 0 << endl;
		exit(0);
	}
	long long xd=sum/3,md=0;
	for (int i = n-1; i>=0 ; --i)
	{
		md +=a[i];
		if(md==xd)
		{
			cnt[i]=1;
		}
	}
	for (int i = n-2; i >=0; --i)
	{
		cnt[i] +=cnt[i+1];
	}
	md=0;
	long long ans=0;
	for (int i = 0; i < n-2; ++i)
	{
		md +=a[i];
		if(md==xd)
		{
			ans +=cnt[i+2];
		}
	}

	cout << ans << endl;
}