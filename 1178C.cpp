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
	int w,h;
	cin >> w >> h;
	int mod=998244353;
	long long ans=1,ans2=1;
	if(w==1 && h==1)
	{
		cout << 4 << endl;
		return 0;
	}
	for (int i = 1; i <= w; ++i)
	{
		ans=(ans*2ll)%mod;
	}
	for (int i = 1; i <= h; ++i)
	{
		ans2=(ans2*2ll)%mod;
	}
	cout << (ans*ans2)%mod << endl;

}