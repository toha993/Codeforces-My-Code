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

int main()
{
	long long n,k;
	cin >> n >> k;
	long long a[2*n+5];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		a[n+i]=a[i];
	}
	vector<long long>din={0},cnt={0};
	for (int i = 0; i < 2*n; ++i)
	{
		din.push_back(din.back()+a[i]);		
	}
	for (int i = 0; i < 2*n; ++i)
	{
		cnt.push_back(cnt.back()+((a[i]*(a[i]+1)))/2);
	}
	long long ans=0;
	for (int i = 0; i < 2*n; ++i)
	{
		if(din[i+1]>=k)
		{
			int z=upper_bound(din.begin(),din.end(),din[i+1]-k)-din.begin();
			long long xd=cnt[i+1]-cnt[z];
			int baki=din[i+1]-din[z];
			int xtra=k-baki;
			xd +=(((a[z-1]*(a[z-1]+1)))/2);
			xd -=((a[z-1]-xtra)*(a[z-1]-xtra+1))/2;
			ans=max(ans,xd);
		}
	}
	cout << ans << endl;
}